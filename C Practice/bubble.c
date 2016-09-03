#include <stdio.h>
#include <stdlib.h>
/* Program that  sorts a list of 10 numbers */
int main() {
  int ctr, inner, outer, didSwap, temp;
  int nums[10]; /* will hold the 10 numbers */

  /* Fills array with random numbers form 1 to 100 */
  for (ctr = 0; ctr < 10; ctr++) {
    nums[ctr] = (rand() % 99) + 1;
  }

  /* Prints the list before it is sorted */
  puts("\nHere is the list before the sort:");
  for (ctr = 0; ctr < 10; ctr++) {
    printf("%d\n", nums[ctr]);
  }

  /* Sorts the array */
  for (outer = 0; outer < 9; outer++) {
    didSwap = 0; /* Become 1 (true) if list is not yet order */
    for (inner = outer; inner < 10; inner++) {
      if (nums[inner] < nums[outer]) {
        temp = nums[inner];
        nums[inner] = nums[outer];
        nums[outer] = temp;
        didSwap = 1; /* true because a swap took place */
      }
    }
    if (didSwap == 0)
      break;
  }

  /* Prints the list after it is sorted */
  printf("\nHere is the list after the sort:\n");
  for (ctr = 0; ctr < 10; ctr++)
    printf("%d\n", nums[ctr]);
  return 0;
}
