/*
 * Exercise #2 for CSCI 1111.90
 * By: Maxwell Cody <maxwell@cody.sh>
 * License: Public Domain
 *
 * Practice using scanf() by reading in a long and a double.
 * Ensure variables are initalized.
 */

#include <stdio.h>

int main() {
  long x = 0;
  double y = 0;

  printf("x = %ld\n", x);
  printf("y = %f\n", y);

  printf("Enter an integer value for x: ");
  scanf("%ld", &x);

  printf("Enter a floating-point value for y: ");
  scanf("%lf", &y);

  printf("x = %ld\n", x);
  printf("y = %f\n", y);

  return 0;
}
