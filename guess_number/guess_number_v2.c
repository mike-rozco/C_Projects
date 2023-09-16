#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Maximum number in the range of numbers to guess.
const int MAX_NUMBER = 100;

// The maximum number of attempts to allow.
const int MAX_ATTEMPTS = 25;

// Read the next guess from STDIN. Reject bad input and force retries.
int ReadGuess() {
  int guess = 0;
  for (;;) {
    printf("? ");
    int matches = scanf("%d", &guess);
    while (getchar() != '\n')
      ;
    if (matches) {
      break;
    }
    printf("Invalid input. Please enter a number between 1 and %d", MAX_NUMBER);
  }
  return guess;
}

int main(int argc, char* argv[]) {
  // Seed random number with the current UNIX time (seconds since Jan 1, 1970.)
  srand(time(NULL));

  // Generate the secret number the user should guess.
  const int secret_number = (rand() % MAX_NUMBER) + 1;

  // Track number of attempts.
  int attempts = 0;
  int guess = 0;

  // Display instructions
  printf("Guess a number between 1 and %d\n", MAX_NUMBER);

  // Loop until we've allowed the max number of attempts.
  for (attempts = 0; attempts < MAX_ATTEMPTS; ++attempts) {
    guess = ReadGuess();

    printf("debug %d, secret=%d\n", guess, secret_number);

    // Evaluate the user's guess.
    if (guess > secret_number) {
      printf("Too high!\n");
    } else if (guess < secret_number) {
      printf("Too low!\n");
    } else {
      // The user guessed correctly.
      break;
    }
  }

  // Did the user win?
  if (guess == secret_number) {
    printf("Congratulations! You guessed the number in %d attempts.\n",
           attempts + 1);
  } else {
    printf("Sorry! Even after %d guess, you failed to guess the number.\n",
           attempts + 1);
  }

  return 0;
}
