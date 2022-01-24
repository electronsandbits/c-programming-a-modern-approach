/*
 * File: sum.c 
 * -----------
 * This program sums a series of integers entered by the user.
 */

#include <stdio.h>

int main() {
   long  n, sum = 0;

   printf("This program sums a series of integers.\n");
   printf("Enter integers (0 to terminate): ");

   scanf("%ld", &n);
   while (n != 0) {
      sum += n;
      scanf("%ld", &n);
   }
   printf("The sum is: %ld\n",  sum);

   return 0;

}

