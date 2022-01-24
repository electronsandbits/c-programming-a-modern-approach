/*
 * File: escape.c 
 * --------------
 * This program illustrates the use of escape sequences.
 */

#include <stdio.h>


int main() {
   printf("Item\tUnit\tPurchase\n\tPrice\tDate\n");

   printf("\"HellO!\"");
   printf("\n");
   printf("\\");
   printf("\n");

   return 0;
}
