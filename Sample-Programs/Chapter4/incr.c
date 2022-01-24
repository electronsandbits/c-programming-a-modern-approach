/*
 * File:incr.c
 * -----------
 *  This sample illustrates the use of compound assignment.
 */

#include <stdio.h>


int main () {
   int i;
   i = 1;
   printf("i is %d\n", --i); /* prints "i is 0 "*/
   printf("i is %d\n", i);  /* prints "i is 0" */
   
   printf("\n");

   i = 1;
   printf("i is %d\n", i--); /* prints "i is 1 "*/
   printf("i is %d\n", i);  /* prints "i is 0" */

   return 0;

}
