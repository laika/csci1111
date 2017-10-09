/*
 * Exercise #10 for CSCI 1111.90
 * By: Maxwell Cody <maxwell@cody.sh>
 * License: Public Domain
 *
 * Progmatically generate a standard 52-card deck of playing cards.
 *
 * Code must utilize conditional statements.
 */

#include <stdio.h>

int main() {
  for(int i = 0; i < 52; ++i) {
    printf("Card %2d: ", i + 1);

    printf("Value = ");
    switch(i % 13) {
      case 0: {
        printf("  Ace");
        break;
      }

      case 10: {
        printf(" Jack");
        break;
      }

      case 11: {
        printf("Queen");
        break;
      }

      case 12: {
        printf(" King");
        break;
      }

      default: {
        printf("%5d", (i % 13) + 1);
        break;
      }
    }

    printf(", Suit = ");
    switch(i / 13) {
      case 0: {
        printf("Hearts");
        break;
      }
      case 1: {
        printf("Diamonds");
        break;
      }
      case 2: {
        printf("Clubs");
        break;
      }
      case 3: {
        printf("Spades");
        break;
      }
      default: {
        printf("UNKNOWN");
        break;
      }
    }

    printf("\n");
  }

  return 0;
}
