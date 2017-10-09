/*
 * Exercise #6 for CSCI 1111.90
 * By: Maxwell Cody <maxwell@cody.sh>
 * License: Public Domain
 *
 * Utilize rand() to produce a list of 5 random years between 2010 and 2019.
 *
 * Ensure random number generator is seeded by system clock.
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
  srand((unsigned int) time(NULL));

  for(int i = 0; i < 5; ++i) {
    printf("Year: 201%d\n", rand() % 10);
  }

  return 0;
}
