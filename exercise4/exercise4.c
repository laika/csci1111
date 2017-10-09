/*
 * Exercise #4 for CSCI 1111.90
 * By: Maxwell Cody <maxwell@cody.sh>
 * License: Public Domain
 *
 * Read in a first name, last name, and middle inital and output full name
 * in the following formats:
 *   - First M. Last
 *   - Last, First M.
 *
 * Code must utilize strcpy() and strcat() functions.
 *
 * NOTE: Due to this being an exercise for an introductory C course,
 * there are no bounds checks when writing to the strings. This will cause
 * unintended behaviour if user isn't careful.
 */

#include <stdio.h>
#include <string.h>

int main() {
  char first[32], last[32], middle[4], full[72];

  printf("   Enter first name: ");
  scanf("%s", first);

  printf("    Enter last name: ");
  scanf("%s", last);

  printf("Enter middle inital: ");
  scanf("%s", middle);

  printf("\n");

  /* Output in "First M. Last" format */
  strcpy(full, first);
  strcat(full, " ");
  strncat(full, middle, 1);
  strcat(full, ". ");
  strcat(full, last);
  printf("Full name: %s\n", full);

  /* Output in "Last, First M." format */
  strcpy(full, last);
  strcat(full, ", ");
  strcat(full, first);
  strcat(full, " ");
  strncat(full, middle, 1);
  strcat(full, ".");
  printf("Full name: %s\n", full);

  return 0;
}
