/*
 * Exercise #3 for CSCI 1111.90
 * By: Maxwell Cody <maxwell@cody.sh>
 * License: Public Domain
 *
 * Determine a cylinder's volume by its height and radius by utilizing
 * floating-point arithmetic.
 *
 * Volume = Pi * Radius^2 * Height
 */

 #include <stdio.h>

 int main() {
   double radius, height;

   printf("Enter the radius of the cylinder: ");
   scanf("%lf", &radius);

   printf("Enter the height of the cylinder: ");
   scanf("%lf", &height);

   /*
    * Intentionally avoiding standard math functions for this exercise.
    * We'll just use our own pi constant and manually calculate the square.
    */
   double volume = 3.14159265358979323846 * (radius * radius) * height;

   printf("\n");
   printf("Volume of the cylinder: %f\n", volume);

   return 0;
 }
