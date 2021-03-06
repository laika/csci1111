/*
 * Assignment #4 for CSCI 1111.90
 * By: Maxwell Cody <maxwell@cody.sh>
 * License: Public Domain
 *
 * Simulates and collects data from random events performed using the
 * rand() function. The data will then be presented to determine how
 * "random" the rand() function is.
 *
 * Random events:
 *   - Flip a coin
 *   - Roll a six-sided die
 *
 * Flips or rolls:
 *   - 10
 *   - 100
 *   - 1,000
 *   - 10,000
 *   - 100,000
 */

#include <stdio.h>
#include <stdlib.h>

void display_coin_randomness(unsigned int);
void display_die_randomness(unsigned short, unsigned int);
void die_randomness(unsigned short, unsigned int, float*);

/*
 * Main function.
 *
 * Invoke coin flips and dice rolls for the given amounts.
 */
int main() {
  for(unsigned int i = 10; i <= 100000; i *= 10) {
    display_coin_randomness(i);
    display_die_randomness(6, i);
  }

  return 0;
}

/*
 * Produces readable output based on the data generated by the die_randomness()
 * function.
 *
 * This function's output is specifically optimized for coins.
 */
void display_coin_randomness(unsigned int flips) {
  printf("Coin flipped %u time(s).\n", flips);
  printf("-----------------------------------\n");

  /*
   * Despite the language used around the die_randomness() function being rather
   * dice-centric, the function's logic is perfect for generating coin flip data
   * as well.
   */
  float data[2];
  die_randomness(2, flips, data);

  printf("  Heads: %.2f%%\n", data[0]);
  printf("  Tails: %.2f%%\n", data[1]);

  printf("\n");
}

/*
 * Produces readable output based on the data generated by the die_randomness()
 * function.
 *
 * This function's output is specifically optimized for dice.
 */
void display_die_randomness(unsigned short sides, unsigned int rolls) {
  printf("%u-sided die rolled %u time(s).\n", sides, rolls);
  printf("-----------------------------------\n");

  float data[sides];
  die_randomness(sides, rolls, data);

  for(unsigned short i = 0; i < sides; ++i)
    printf("  Side #%u: %.2f%%\n", i + 1, data[i]);

  printf("\n");
}

/*
 * Computes and compiles die randomness data using the standard library's
 * rand().
 *
 * Function rolls an imaginary die with a specified amount of faces a specified
 * amount of times.
 *
 * The first two arguments should be rather self explanatory.
 * `sides` is the amount of sides (or faces) on the imaginary die.
 * `rolls` is the amount of times the imaginary die is "rolled".
 *
 * The last argument `data` is slightly more complicated to understand.
 * `data` is a float-array where the outcome percentages are stored.
 */
void die_randomness(unsigned short sides, unsigned int rolls, float data[]) {
  unsigned int outcomes[sides];

  for(unsigned short i = 0; i < sides; ++i)
    outcomes[i] = 0;
  for(unsigned int i = 0; i < rolls; ++i)
    ++outcomes[rand() % sides];
  for(unsigned short i = 0; i < sides; ++i)
    data[i] = (float) outcomes[i] / rolls * 100.0;
}
