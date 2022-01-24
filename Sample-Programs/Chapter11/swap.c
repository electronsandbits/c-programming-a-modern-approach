/*
 * File: Swap.c
 * ------------
 * This program when passed the addresses of two variables
 * should exchange the values of the variables.
 */

#include <stdio.h>


/* Function prototypes */

void swap(int *P, int *q);


/* Main program */

int main() {
   int i = 144;
   int j = 1265;
   printf(" Before swap  i = %d, and j = %d\n", i , j);
   swap(&i, &j); /* Exchanges values of i and j */ 
   printf(" After swap  i = %d, and j = %d\n", i , j);

   return 0;
}


/*
 * Function: swap
 * Usage: swap(int i, int j);
 * --------------------------
 * Exchanges values of i and j.
 */

void swap( int *p, int *q) {
   int temp;
   temp = *p;
   *p = *q;
   *q = temp;
}
