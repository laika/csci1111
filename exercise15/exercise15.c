/*
 * Exercise #15 for CSCI 1111.90
 * By: Maxwell Cody <maxwell@cody.sh>
 * License: Public Domain
 *
 * Populates array with random floating-point values. Then sorts it in
 * ascending order using selection sort.
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 10

int main() {
   srand((unsigned int)time(NULL));

   double arr[SIZE];

   printf("Inital array:\n");
   for(int i = 0; i < SIZE; ++i) {
      arr[i] = (double) rand() / RAND_MAX * rand();
      printf("arr[%d] = %.14lf\n", i, arr[i]);
   }

   /* Sort using selection-sort */

   for(int i = 0; i < SIZE-1; ++i) {
      int min = i;
      for(int j = i + 1; j < SIZE; ++j) {
         if(arr[j] < arr[min]) {
            min = j;
         }
      }

      if(min != i) {
         double tmp = arr[i];
         arr[i] = arr[min];
         arr[min] = tmp;
      }
   }

   printf("\nSorted array:\n");
   for(int i = 0; i < SIZE; ++i) {
      printf("arr[%d] = %.14lf\n", i, arr[i]);
   }

   return 0;
}
