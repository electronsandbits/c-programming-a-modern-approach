/*
 * File: addFrac.c
 * ---------------
 * This program illustrates scanf's ability to match patterns,
 * consider the problem of reading a fraction entered by the user.
 *
 * @author: K.N. King
 * @versionL: 2018 by @electronsandbits
 */

#include <stdio.h>

int main() {
   printf("Adds two fractions.\n");

   int num1, num2, den1, den2, resultNum, resultDen;

   printf("Enter first fraction: ");
   scanf("%d/%d", &num1, &den1);
   
   printf("Enter second fraction: ");
   scanf("%d/%d", &num2, &den2);

   resultNum = num1 * den2 + num2 * den1;
   resultDen = den1 * den2;

   printf("The sum is  %d/%d\n", resultNum, resultDen);

   return 0;
}
