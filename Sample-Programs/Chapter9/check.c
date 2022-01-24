/*
 * File: check.c
 * -------------
 * This program returns 1 if both x and y fall between 0 and n-1, inclusive.
 * The function should return 0 otherwise. Assume that x, y, n are all of 
 * type int.
 * @author Frank Funny
 * @version 2020
 */


#include <stdio.h>

/* Function prototypes */

int check(int x, int y, int n);


/* Main program */

int main() {
   int x, y, n;
  
   printf("\nEnter x, y, and n: ");
   scanf("%d%d%d", &x, &y, &n);

   check(x, y, n); /* Function's call */
  
   return 0;
}

/*
 * Function: check
 * Usage: int c = check(x, y, n);
 * ------------------------------
 * Returns 1 if both x and y fall between 0 and n - 1.
 * Otherwise returns 0.
 */

int check(int x, int y, int n) {
   return( x >= 0 && x < n - 1 && y >= 0 && y < n - 1);
}
  

 
