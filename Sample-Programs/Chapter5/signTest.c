/*
 * File:signTest.c
 * ---------------
 * This program reads in an integer and classifies
 * it as negative, zero, or positive depending on its sign.
 */

#include <stdio.h>

int main() {
   int n;

   printf("This program classifies an integer by its sign.\n");
   printf("Enter n: ");
   scanf("%d", &n);

   if  (n > 0) {
      printf("That number is positive.\n");
   } else if (n == 0) {
      printf("That number is zero.\n");
   } else {
      printf(" That number is negative.\n");
   }
   
   return 0;
}
