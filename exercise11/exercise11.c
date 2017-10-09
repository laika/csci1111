/*
 * Exercise #11 for CSCI 1111.90
 * By: Maxwell Cody <maxwell@cody.sh>
 * License: Public Domain
 *
 * Implement a cardValue() function that takes a card number and returns
 * its value in Blackjack.
 *
 * For simplicity Ace shall always be 11.
 *
 * Representation for "card numbers":
 *   - Card 0 is an Ace.
 *   - Card 1-9 are 2-10.
 *   - Card 10 is a Jack.
 *   - Card 11 is a Queen.
 *   - Card 12 is a King.
 *   - Value then resets for card 13, therefore card 13 is an Ace.
 */

#include <stdio.h>

int cardValue(int);

int main() {
  for(int i = 0; i < 52; ++i)
    printf("cardValue(%d) = %d\n", i, cardValue(i));

  return 0;
}

int cardValue(int card) {
  return (card %= 13) == 0 ? 11 :
         card >= 10 ? 10 : card + 1;
}
