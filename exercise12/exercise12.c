/*
 * Exercise #12 for CSCI 1111.90
 * By: Maxwell Cody <maxwell@cody.sh>
 * License: Public Domain
 *
 * Implement a printBinary() function that recursively prints a signed integer
 * in binary.
 *
 * Use actual negative sign instead of sing bit.
 */

#include <stdio.h>

void printBinary(int);

int main() {
  printBinary(-1337);
  printf("\n");

  return 0;
}

void printBinary(int i) {
  if(i < 0) {
    printf("-");
    printBinary(-i);
  } else if(i < 2) {
    printf("%d", i);
  } else {
    printBinary(i >> 1); /* Bit-shifts are faster than divison */
    printf("%d", i & 1);
  }
}
