/* 
 * File: upc.c
 * -----------
 * This program calculates the check digit for an arbitrary UPC.
 * The program ask the user to enter the first 11 digits of the UPC
 * and then the corresponding check digit is displayed.
 * ----------------------------------------------------------------
 * Here is the Algorithm for computing the check digit:
 * Add the first, third, fifth, seventh, ninth, and eleventh digits.
 * Add the second, fourth, sixth, eight, and tenth digits.
 * Multiply the first sum by 3 and add it to the second sum.
 * Subtract 1 from the total.
 * Compute the remainder when the adjusted total is divided by 10.
 * Subtract the remainder from 9.
 */


#include <stdio.h>

int main (void) {
   int d, i1, i2 ,i3, i4, i5, j1, j2, j3, j4, j5;
   int firstSum, secondSum, total; 

   printf("Enter the first (single) digit: ");
   scanf("%ld", &d);
   printf("Enter first group of five digits: ");
   scanf("%ld%ld%ld%ld%ld", &i1, &i2, &i3, &i4, &i5);
   printf("Enter the second group of five digits: ");
   scanf("%ld%ld%ld%ld%ld", &j1, &j2, &j3, &j4, &j5);

   firstSum = d + i2 + i4 + j1 + j3 + j5;
   secondSum  = i1 + i3 + i5 + j2 + j4;
   total  = 3 * firstSum + secondSum;

   printf("Check digit:%d\n", 9 - ((total - 1 ) % 10));

   return 0;
}


