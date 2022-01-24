/*
 * File: sumDigits.c 
 * -----------------
 * This program calculates the number of digits
 * in an integer entered by the user.
 * Our strategy will be to divide the user's 
 * input by 10 repeatedly until it becomes 0.
 * the number of divisions performed is the number of digits.
 */

#include <stdio.h>

int main()  {
   int n, digits = 0;

   printf("This program prints the sum of digits in an integer.\n");
   printf("Enter a nonnegative integer: ");
   scanf("%d", &n);

   do {
     n/= 10;
     digits++;
   } while (n > 0);

   printf("The number has %d digit(s). \n", digits);

   return 0;
   
}
