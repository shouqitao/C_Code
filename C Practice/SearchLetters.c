/* Search for letters */
#include <stdio.h>
#include <stdlib.h>

int main() {
  char letters[50];
  char userInit;
  int ctr, nl, numbInits = 0;
  /* Store random letters from A to Z */
  for (ctr = 0; ctr < 50; ctr++) {
    letters[ctr] = 65 + (rand() % 26);
  }
  /* Get the user's search initial */
  printf("What is your first initial? ");
  userInit = getchar();
  nl = getchar(); /* To discard the newline */
  /* Fine the number of occurrences */
  for (ctr = 0; ctr < 50; ctr++) {
    if (letters[ctr] == userInit)
      numbInits++;
  }
  printf("\nIn the array, there were %d of your initials.\n", numbInits);
  return 0;
}