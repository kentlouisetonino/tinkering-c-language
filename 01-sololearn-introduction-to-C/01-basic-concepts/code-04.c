#include <stdio.h>
#include <stdlib.h>

void clearConsole(void) { system("clear"); }

void newLine(void) { printf("\n"); }

void inputGetChar(void) {
  char letter;
  char garbage[100];

  printf("GETCHAR FUNCTION EXAMPLE");
  newLine();

  // Ask the input.
  printf("Input: ");
  letter = getchar();

  // Output the input.
  printf("Output: %c", letter);

  // Get char can only handle 1 character.
  // The remaining characters will still remain in the input buffer.
  // This handles the remaining characters.
  // Acting as a garbage collector.
  fgets(garbage, 100, stdin);

  newLine();
}

void inputGets(void) {
  char planet[10];

  printf("GETS FUNCTION EXAMPLE");
  newLine();

  // Ask the input.
  printf("Input: ");
  fgets(planet, 10, stdin);

  // Output the input.
  printf("Output: %s", planet);
  newLine();
}

int main(void) {
  // Clear up the console.
  clearConsole();

  // Example for getChar() function.
  inputGetChar();
  newLine();

  // Example for gets() function.
  inputGets();
  newLine();

  return 0;
}
