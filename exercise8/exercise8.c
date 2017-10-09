/*
 * Exercise #8 for CSCI 1111.90
 * By: Maxwell Cody <maxwell@cody.sh>
 * License: Public Domain
 *
 * Take a list of values and do the following:
 *   - Count how many values were entered
 *   - Keep a running total
 *   - Compute the average
 *   - Display smallest and largest values
 *   - Display negative value closest to zero
 *   - Display negative value furthest from zero
 *   - Display positive value closest to zero
 *   - Display positive value furthest from zero
 */

#include <stdio.h>

int main() {
  int count = 0, total = 0, value;
  int signedMin = 0, signedMax = 0, unsignedMin = 0, unsignedMax = 0;
  int positiveMin = -1, positiveMax = -1, negativeMin = 1, negativeMax = 1;

  while(1) {
    printf("Enter a value(q to quit): ");
    if(scanf("%d", &value) != 1) break;

    printf("Value entered: %d\n", value);

    ++count;
    total += value;

    if(count == 1 || value < signedMin) signedMin = value;
    if(count == 1 || value > signedMax) signedMax = value;

    if(value > 0) {
      if(value > positiveMax || positiveMax < 0) positiveMax = value;
      if(value < positiveMin || positiveMin < 0) positiveMin = value;
    } else if(value < 0) {
      if(value > negativeMax || negativeMax > 0) negativeMax = value;
      if(value < negativeMin || negativeMin > 0) negativeMin = value;
    }
  }

  printf("\n");

  if(count == 0) {
    printf("No values entered.\n");
    return 0;
  }

  printf("Count:   %d\n", count);
  printf("Total:   %d\n", total);
  printf("Average: %.3f\n", (float) total / count);
  printf("Minimum: %d\n", signedMin);
  printf("Maximum: %d\n", signedMax);

  printf("\n");

  if(negativeMin > 0) { /* If the minimum is above zero, so is the maximum. */
    printf("Negative closest to zero:    n/a\n");
    printf("Negative furthest from zero: n/a\n");
  } else {
    printf("Negative closest to zero:    %d\n", negativeMax);
    printf("Negative furthest from zero: %d\n", negativeMin);
  }

  if(positiveMin < 0) { /* If the minimum is below zero, so is the maximum. */
    printf("Positive closest to zero:    n/a\n");
    printf("Positive furthest from zero: n/a\n");
  } else {
    printf("Positive closest to zero:    %d\n", positiveMin);
    printf("Positive furthest from zero: %d\n", positiveMax);
  }

  return 0;
}
