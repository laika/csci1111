/*
 * Exercise #9 for CSCI 1111.90
 * By: Maxwell Cody <maxwell@cody.sh>
 * License: Public Domain
 *
 * Read characters in from standard input and write them to standard output
 * in upper case.
 */

#include <stdio.h>

int main() {
  for(unsigned int ch; (ch = getchar()) != EOF; putchar(ch)) {
    if(ch >= 'a' && ch <= 'z')
      ch -= 32;
  }
}
