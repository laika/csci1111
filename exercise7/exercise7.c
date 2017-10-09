/*
 * Exercise #7 for CSCI 1111.90
 * By: Maxwell Cody <maxwell@cody.sh>
 * License: Public Domain
 *
 * Compute the area of a rectangle and determine whether or not it's a square.
 */

#include <stdio.h>

int main() {
  long length = 0, width = 0;

  printf("Enter the legnth of the rectangle: ");
  scanf("%ld", &length);

  printf(" Enter the width of the rectangle: ");
  scanf("%ld", &width);

  long area = length * width;

  printf("\n");
  printf("Area of the rectangle: %ld\n", area);

  if(length == width) printf("The rectangle is a square.\n");
  else printf("The rectangle is not a square.\n");

  return 0;
}
