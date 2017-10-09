/*
 * Assignment #3 for CSCI 1111.90
 * By: Maxwell Cody <maxwell@cody.sh>
 * License: Public Domain
 *
 * Program that takes certain data(height, depth, and width) about a rectangular
 * prism and computes the following values using (mostly) integer arithmetic:
 *   - Surface area of the top.
 *   - Surface area of the front face.
 *   - Surface area of an end.
 *   - Surface area of the entire prism.
 *   - Perimeter of the bottom.
 *   - Perimeter of the front face.
 *   - Perimeter of an end.
 *   - Volume of the prism.
 *   - Diagonal distance across the prism.
 */

#include <stdio.h>
#include <math.h>

int main(void) {
   int height, depth, width;

   printf("    Height of the rectangular prism: ");
   scanf("%d", &height);

   printf("     Depth of the rectangular prism: ");
   scanf("%d", &depth);

   printf("     Width of the rectangular prism: ");
   scanf("%d", &width);

   printf("\n=============================================\n");

   /* Surface Area Computations */
   int saTop = width * depth;
   int saFront = height * depth;
   int saEnd = height * width;
   int saTotal = 2 * (saTop + saFront + saEnd);

   printf("\n""     Surface area of the top: %d\n", saTop);
   printf(    "   Surface area of the front: %d\n", saFront);
   printf(    "      Surface area of an end: %d\n", saEnd);
   printf(    "  Total surface of the prism: %d\n", saTotal);

   /* Perimeter Computations */
   int pBottom = (depth * 2) + (width * 2);
   int pFront = (depth * 2) + (height * 2);
   int pEnd = (height * 2) + (width * 2);

   printf("\n""     Perimeter of the bottom: %d\n", pBottom);
   printf(    "      Perimeter of the front: %d\n", pFront);
   printf(    "         Perimeter of an end: %d\n", pEnd);

   /* Volume Computation */
   int volume = depth * width * height;

   printf("\n""   Total volume of the prism: %d\n", volume);

   /* "Chord" Computations */
   int heightSq = height * height;
   int depthSq = depth * depth;
   int widthSq = width * width;
   double diagonal = sqrt(heightSq + depthSq + widthSq);

   printf("\n""Diagonal length of the prism: %.2f\n", diagonal);

   return 0;
}
