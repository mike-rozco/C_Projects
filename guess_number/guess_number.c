#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char* argv[]) {
  // This function creates a new SEED by using a positive(unsigned) value of the
  // current time. The rand() function takes this SEED value and creates a
  // random number from 1 to 10. The modulus operator (%) returns the remainder
  // of a number being divided by a chosen divisor: in this case 10 which works
  // great for staying within a certain range you want. 

  srand((unsigned)time(NULL));
  int number = rand() % 10 + 1;
  int attempts = 0;

  // This while loop keeps the max number of attempts at 10. To ensure the guess
  // is a proper input the second while loop uses the  scanf() function to
  // ensure that the only correct input is a digit(%d) and that it's only one.
  // If there is wrong input then the getchar() function clears the buffer until
  // it reaches the null terminator(\n) for a new entry. The rest of the logic
  // of the game is checking for equality between the guess and the random
  // number and hinting in which direction the right answer is while logging
  // each attempt. Once the guess is correct the program breaks out of the while
  // loop and prints the number of attempts it took to guess correctly.

  while (attempts <= 10) {
    int guess;

    printf("Guess a number from 1 to 10:\n");

    while (scanf("%d", &guess) != 1) {
      printf("Invalid input please try again!\n");
      while (getchar() != '\n')
        ;
    }

    if (guess == number) {
      attempts++;
      break;

    } else if (guess > number) {
      attempts++;
      printf("Too high!\n");

    } else if (guess < number) {
      attempts++;
      printf("Too low!\n");
    }
  }

  printf(
      "It took %d attempts to guess right. See if you can get it in one try!\n",
      attempts);

  return 0;
}
