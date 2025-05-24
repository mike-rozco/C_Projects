#include<stdio.h>
#include<string.h>
int main() {

// Each counter position matches a letter: 0 for 'a', 1 for 'b', etc.
// Loop through each string to count letters (ignore spaces)
// Compare counters; set flag to 1 if any mismatch
// Print result based on flag value




  int counter1[] = {0, 0, 0, 0};
  int counter2[] = {0, 0, 0, 0};

  char s1[] = "dbb cccccaacb cdbababdcdcdab dcdad";
  char s2[] = "bbbcc bdddccccad cdbbaaacaccdabdd";

  int flag = 0;

  for(int i = 0; i < strlen(s1); i++) {
    switch(s1[i]) {
      case 'a':
        counter1[0]++;
        break;
      case 'b':
        counter1[1]++;
        break;
      case 'c':
        counter1[2]++;
        break;
      case 'd':
        counter1[3]++;
        break;

    }


     switch(s2[i]) {
      case 'a':
        counter2[0]++;
        break;
      case 'b':
        counter2[1]++;
        break;
      case 'c':
        counter2[2]++;
        break;
      case 'd':
        counter2[3]++;
        break;
    }

  }


  for(int k = 0; k < 4; k++) {
    if(counter1[k] != counter2[k]) {
      flag = 1;
    } 
  }

  if(flag == 1) {
    printf("Not Anagram!");
  } else {
      printf("Anagram!");
    }

}
