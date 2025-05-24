#include <stdio.h>

int main(int argc, char* argv[]) {
  // This declares the variables for the user input and the two numbers to
  // perform a calculation on.
  int choice;
  int x, y;
  int c;

  for (;;) {
    printf("Please make a selection: \n");
    printf("1. Add \n");
    printf("2. Subtract \n");
    printf("3. Multiply \n");
    printf("4. Divide \n");
    printf("5. Quit \n");
    scanf("%d", &choice);

    if (choice == 5) {
      printf("Exiting the program.\n");
      break;  // Exit the while loop
    }

    printf("Enter first number: \n");
    scanf("%d", &x);
    printf("Enter second number: \n");
    scanf("%d", &y);

    while ((c = getchar()) != '\n') {
    };  // Clear the buffer

    // Can create a more modular approach by fitting each operation into a
    // function
    //  but for four simple operations a switch statement suffices.
    switch (choice) {
      case 1:
        printf("Total: %d \n", x + y);
        break;
      case 2:
        printf("Total: %d \n", x - y);
        break;
      case 3:
        printf("Total: %d \n", x * y);
        break;
      case 4:
        if (y == 0) {
          printf("Error: Divsion by zero!\n");
          break;
        } else {
          printf("Total: %d \n", x / y);
        }
        break;
      default:
        printf("Invalid selection. \n");
        break;
    }
  }

  return 0;
}
