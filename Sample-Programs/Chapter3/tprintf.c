/*
 * File: tprintf.c 
 * ---------------
 * The following program illustrates the use of printf to print
 * integers and floating-point numbers in various formats.
 * @author: K.N.King
 * @version: 2018 by @electronsandbits
 */

#include <stdio.h>

int main() {
   printf("Prints int and float values in various formats.\n");

   int i;
   float x;

   i = 40;
   x = 839.21f;

   printf("|%d|%5d|%-5d|%5.3d|\n", i, i, i, i);
   printf("|%10.3f|%10.3e|%-10g|\n", x, x, x);
   
   printf("Item\tUnit\tPurchase\n\tPrice\tDate\n");
   printf("\"Hello!\"\n");
   printf("\\"); /* prints one \ character */

   return 0;
}
