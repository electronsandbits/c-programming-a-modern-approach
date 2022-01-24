/*
 * File:Euclid.c
 * -------------
 * This program calculates the greatest common divisor of two numbers
 * by applying Euclid's algorithm.
 * @author Frank Funny
 *@version 2020 
  */


#include <stdio.h>


/* Function prototypes */

int gcd(int m, int n);

/* Main program */

int main() {
   printf("Program to compute the greatest common divisor.\n");
   int m, n;
   printf("Enter m: ");
   scanf("%d", &m);
   printf("Enter n: ");
   scanf("%d", &n);
   printf("The gcd of %d and %d is %d\n", m , n, gcd(m, n));

   return 0;
}


/*
 * Function:gcd
 * Usage: int g = gcd(m, n);
 * -------------------------
 * Compute the greatest common divisor using a recursive implementation
 * of Euclid's algorith.
 */


int gcd(int m, int n) {
   if ( m % n == 0) {
     return n;
   } else {
      return gcd(n, m % n);
  }
}
