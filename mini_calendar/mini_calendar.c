#include <stdio.h>
#include <stdbool.h>


/* Eliminates all years that aren't divisible by 4 then removes any that are divisible by 100 and then filters back in for any that are divisible by 400 which accounts for all leap years.
*/ 

bool is_leap_year(int year) {
  if(year % 4 != 0) {
    return false;
  }  else if(year % 100 != 0) {
    return true;
  } else if (year % 400 != 0) {
    return false;
  } else {
    return true;
  }
}



int days_in_month[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
char *month_names[] = {"", "Jan", "Feb", "Mar", "Apr", "May", "Jun", "Jul", "Aug", "Sep", "Oct", "Nov", "Dec"};



int get_weekday_index(int day, int month, int year, int ref_day, int ref_month, int ref_year, int ref_weekday) {

  int days_to_target = 0;

  
  while (ref_day != day || ref_month != month || ref_year != year) {

  ref_day++;
  int days_this_month = days_in_month[ref_month];


    if(ref_month == 2 && is_leap_year(ref_year)) {
      days_this_month = 29; 
    }
    
    if(ref_day > days_this_month){
      ref_month++;
      ref_day = 1;
        if(ref_month > 12) {
        ref_year++;
        ref_month = 1;
      }
    }

    days_to_target++;
  
  }

  int weekday_index = (ref_weekday + days_to_target) % 7;

  return weekday_index;
}
  
char *weekday_names[] = {"Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday"};

 



//Reference point to find day of week for any date. 
int ref_year = 2000;
int ref_month = 1;
int ref_day = 1;
int ref_weekday = 6; 



/*Adds days and adjusts date by continously subtracting days left in month from days left until none are left. Uses pointers since you need to actually change the date and not a copy*/

void add_days_to_date(int *mm, int *dd, int *yy, int days_left_to_add) {
  int days_left_in_month;

  while (days_left_to_add > 0) {
    days_left_in_month = days_in_month[*mm] - *dd + 1;

    if(*mm == 2 && is_leap_year(*yy)) {
      days_left_in_month++;
    } 

    if (days_left_to_add >= days_left_in_month) {
      days_left_to_add -= days_left_in_month;
      *dd = 1;
      if(*mm == 12) {
        *mm = 1;
        (*yy)++;
      } else {
        *mm = *mm + 1;
      }

    } else {
      *dd += days_left_to_add;
      days_left_to_add = 0;
    }
  }

}




int main() {


  int dd, mm, yy, days_left_to_add;


  printf("Please enter a date between the years 1800 and 10000 in the format mm dd yy and provide the number of days to add to this date: \n");
  scanf("%d%d%d%d", &mm, &dd, &yy, &days_left_to_add);

  add_days_to_date(&mm, &dd, &yy, days_left_to_add);
  int weekday_index = get_weekday_index(dd, mm, yy, ref_day, ref_month, ref_year, ref_weekday);



  printf("New date: %s %d %d. It falls on a %s.\n", month_names[mm], dd, yy, weekday_names[weekday_index]);

  /*
  int year;
  printf("Provide a number between 1800 and 10000.\n");
  scanf("%i", &year);

  if (is_leap_year(year)) {
    printf("Leap Year");
  } else {
    printf("Not Leap Year");
  }
*/

}






