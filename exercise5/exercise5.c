/*
 * Exercise #5 for CSCI 1111.90
 * By: Maxwell Cody <maxwell@cody.sh>
 * License: Public Domain
 *
 * Iteratively list multiples of 5 from 100 to 5 using a while loop and a
 * for loop.
 */

#include <stdio.h>

int main() {
  printf("Multiples of 5, generated by while loop: ");
  int i = 100;
  while(i >= 5) {
    printf("%d ", i);
    i -= 5;
  }
  printf("\n");

  printf("  Multiples of 5, generated by for loop: ");
  for(i = 100; i >= 5; i -= 5) {
    printf("%d ", i);
  }
  printf("\n");

  return 0;
}
