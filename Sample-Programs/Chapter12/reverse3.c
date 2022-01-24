/*
 * File: reverse3.c 
 * ----------------
 * This  program reads 10 numbers, then writes the 
 * numbers in reverse order. As the program reads the numbers, it 
 * stores them in an array.Once all the numbers are read, the program
 * steps through the array backwards as it prints the numbers.
 * The original program used subscripting to access elements of the array.
 * Here's a new version in which I've replaced subscripting with pointer 
 * arithmetic.
 */

#include <stdio.h>

/* Constants */

#define N 7

/* Main program */

int main () {
   int a[N], *p;

   printf("Reverses a series of numbers (pointer version).\n");

   printf("Enter %d  numbers:  ", N);
   for (p = a; p < a + N; p++) {
      scanf("%d", p);
   }

   printf("In reverse order:");
   for (p = a + N - 1; p >= a; p--) {
      printf(" %d",*p);
   }
   printf("\n");

   return 0;
}

 
