/*
 * File: countDown.c 
 * -----------------
 * This program prints the message T minus n 
 * and counting, where n is supplied when the function is called.  
 * @author Frank Funny
 * @version 2020
 */

#include <stdio.h>
 
/* Function prototypes */

void printCount (int n); 

/* Main program */

int main () {
   int i;

   printf("This program prints T minus n and counting.\n");
   
   for (i = 10; i > 0; --i) {
      printCount(i);  /* Function's call */ 
   }
   return 0;
}


/* 
 * Function: printCount()
 * Usage: void  printCount(n);
 * ---------------------------
 * Prints  countdown.
 */

void printCount(int n) {
   printf("T minus %d and counting\n", n);
}

