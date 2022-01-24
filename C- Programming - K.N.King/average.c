/*
 * File:average.c 
 * --------------
 * This program reads in three numbers and computes 
 * their averages, one pair at a time.
 *@author Frank Funny - based on K.N. King - C programming A modern Modern 2nd
 *@version  2020/01/07
 */

#include <stdio.h>

/* Function prototypes */

double average (double a, double b);

/* Main program */

int main() {
   double x, y, z;

   printf("This program computes pairwise average of three numbers.\n");  
   printf("Enter three numbers: ");
   scanf("%lf %lf %lf", &x, &y, &z);

   printf("Average of %g and %g: %g\n", x, y, average(x, y));
   printf("Average of %g and %g: %g\n", y, z, average(y, z));
   printf("Average of %g and %g: %g\n", x, z, average(x, z));

   return 0;
}
 
 /*
 * Function: average 
 * Usage:avg = double average (a, b);
 * ----------------------------------
 * Returns the average of three numbers.
 */ 

double average (double a, double b) {
    return (a + b) / 2 ;
}
