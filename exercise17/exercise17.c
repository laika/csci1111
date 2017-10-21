/*
 * Exercise #17 for CSCI 1111.90
 * By: Maxwell Cody <maxwell@cody.sh>
 * License: Public Domain
 *
 * Write a program that uses a 2D array to represent a Tic-Tac-Toe board.
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

#define BOARD_WIDTH 3
#define BOARD_HEIGHT 3

int main() {
  srand((unsigned int)time(NULL));

  char board[BOARD_HEIGHT][BOARD_WIDTH];

  /* Populate board */
  for(int y = 0; y < BOARD_HEIGHT; ++y) {
    for(int x = 0; x < BOARD_WIDTH; ++x) {
      board[y][x] = (rand() % 2)  ? 'O' : 'X';
    }
  }

  /* Display board */
  for(int y = 0; y < BOARD_HEIGHT; ++y) {
    for(int x = 0; x < BOARD_WIDTH; ++x) {
      printf("%c ", board[y][x]);
    }
    printf("\n");
  }

  return 0;
}
