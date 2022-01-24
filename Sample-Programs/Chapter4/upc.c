/*
 * File:upc.c
 * ----------
 * This program calculates the check digit for an arbitrary UPC.
 * The program will ask the user to enter the first 11 digits of the UPC,
 * then will display the corresponding check digit.
 * To avoid confusion, we'll ask the user to enter the number in
 * three parts: The single digit at the left, the first group of five
 * digits, and the second group of five digits. 
 */

#include <stdio.h>

 int main () {
    printf("Computes a Universal Product(UPC) Code check digit\n");	

   int d, i1, i2, i3, i4, i5, j1, j2, j3, j4, j5;
   int firstSum, secondSum, total;

   printf("Enter the first (single) digit:  ");
   scanf("%1d", &d);

   printf("Enter first group of five digits: ");
   scanf("%1d%1d%1d%1d%1d", &i1, &i2, &i3, &i4, &i5);

   printf("Enter second group of five digits: ");
   scanf("%1d%1d%1d%1d%1d", &j1, &j2, &j3, &j4, &j5);

   firstSum = d + i2 + i4 + j1 + j3 + j5;
   secondSum = i1 + i3 + i5 + j2 + j4;

   total = 3 * firstSum + secondSum;

   printf("Check digit: %d\n",  9 - ((total - 1) % 10));

   return 0;
}

 
