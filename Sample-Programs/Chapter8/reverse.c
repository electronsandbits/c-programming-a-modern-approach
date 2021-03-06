/*
 * File: reverse.c 
 * ---------------
 * This program prompts the user to enter a series of
 * numbers, then prints them in reverse order.
 * The strategy will be to store the numbers in an array 
 * as they're read, then go through the array backwards,
 * printing the elements one by one. 
 */

#include <stdio.h>

/* Constants*/

#define N 10

/* Main program */

int main () {
   int a[N], i;
   printf("This program reverses a series of numbers.\n");

   /* Input the numbers */
   printf("Enter %d numbers: ", N);
   for (i = 0; i < N; i++) {
      scanf("%d", &a[i]);  /* reads data into a */
   }

   /*Output the numbers */
   printf("In reverse order: ");
   for (i = N - 1; i >= 0; i--) {
      printf("%d ", a[i]);
   }
   printf("\n");   

   return 0;
}



