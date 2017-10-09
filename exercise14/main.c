/*
 * Part of exercise #14 for CSCI 1111.90
 * By: Maxwell Cody <maxwell@cody.sh>
 * License: Public Domain
 *
 * Implement a doubler() function that takes the address to a floating-point
 * value and doubles that value.
 *
 * Spread the source code across 3 files.
 */

#include <stdio.h>
#include "doubler.h"

int main() {
  float fl = 22.5;
  printf("Initial value: %.2f\n", fl);
  doubler(&fl);
  printf("New Value: %.2f\n", fl);

  return 0;
}
