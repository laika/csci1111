/*
 * Exercise #16 for CSCI 1111.90
 * By: Maxwell Cody <maxwell@cody.sh>
 * License: Public Domain
 *
 * Implement a loop that converts a string to uppercase.
 */

#include <stdio.h>

char* chPtrUpr(char*);

int main() {
  char myString[] = "Hello, World!";
  puts(myString);
  for(char* stringPtr = myString; *chPtrUpr(stringPtr); stringPtr++);
  puts(myString);

  return 0;
}

char* chPtrUpr(char* chPtr) {
  *chPtr -= (*chPtr >= 'a' && *chPtr <= 'z') ? 32 : 0;
  return chPtr;
}
