/*
 * Exercise #13 for CSCI 1111.90
 * By: Maxwell Cody <maxwell@cody.sh>
 * License: Public Domain
 *
 * Implement a doubler() function that takes the address to a floating-point
 * value and doubles that value.
 */

#include <stido.h>

void doubler(float*);

int main() {
  float fl = 22.5;
  printf("Initial value: %.2f\n", fl);
  doubler(&fl);
  printf("New value: %.2f\n", fl);

  return 0;
}

void doubler(float* dest) {
  *dest *= 2.0;
}
