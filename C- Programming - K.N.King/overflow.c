/*
 * File: overflow.c 
 * ----------------
 * This program demonstrates the issue regarding
 * floating point numbers.
 */


#include <stdio.h>


int main() {
   float number;
   number = 0.1;

   printf("The number is %f\n:", number);

   return 0;
}
