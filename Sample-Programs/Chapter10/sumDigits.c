/*
 * File:sumDigits.c
 * ----------------
 *  This program sums the digits in a positive integer.
 *  The program depends on the fact that the last digit of an integer
 *  n is given by n % 10 and the number consisting of all but the last
 *  digit is given the expression n/10.
 */  


#include <stdio.h>

int main() {
   printf("This program sums the digits inan integer.");

   int sum = 0; /* local variable */

   while (n > 0)  {
      sum += n  % 10;
      n/= 10;
   }
   
   return sum;


}
