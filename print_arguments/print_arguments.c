//This library provides a wide range of functionalities for working with both file and console input/output in C programs.
#include <stdio.h>

int main(int argc, char* argv[]) {
// A for loop creates a starting value and increments by a specified amount until a condition is no longer true and then exits.
// In this case this loop starts at 0, increments by 1, and exits once i < argc is not true. What is different about this loop
// is that argc is variable/dynamic to the number of arguments provided in the terminal but the exiting condition is always the same. 

  for (int i = 0; i < argc; i++) {
    printf("Argument %d: %s\n", i, argv[i]);
}
  
//%d and %s are placeholders for integers and strings, respectively. 
  
//The escape character \n returns to a new line as if pressing "Enter" or "return" on your keyboard when writing on a computer.

//Notice the difference between printing i and printing argv[i]: The first prints the current integer value of i, while the second
//prints the value of the element at that array's index. All arrays are indexed starting with zero and the crucial thing that is a
//source of frustration starting out is remembering that indexes are always 1 less than the length of any array. You can also think
//of it as indexes shift to the left by one.


  return 0;
}
