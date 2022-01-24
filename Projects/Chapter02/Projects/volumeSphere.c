/*
 * File:volumeSphere.c
 * -------------------
 * This program computes the volume of a sphere with a 10-meter
 * radius, using the formula V = 4/3 * PI * r^3.
 */

#include <stdio.h>

/* Constants */

const float PI = 3.141593;

/* Main program */

int main() {
   float radius, volume;
   
   printf("Input a real value for the radius:\n");
   scanf("%f", &radius);
   printf("\nThe radius of sphere is: %6.2f inches\n", radius);

   if (radius > 0) {
     volume = 4.0 / 3.0 * PI * radius * radius * radius;
   }  
   printf("The volume of sphere is: %6.2f cubic inches\n", volume);

   return 0;
}
