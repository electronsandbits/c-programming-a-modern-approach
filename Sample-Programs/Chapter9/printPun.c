/*
 * File:printPun.c
 * ---------------
 * This program illustrates  function 
 * with no parameters at all.
 */

/* Function prototypes */

void printPun (void);

/* Main program */

int main (void) {

   printPun();  /* calling a function with no argument */
 
   return 0;
}

/* 
 * Function: printPun
 * Usage: printPun();
 * ------------------
 * Returns nothing.
 */

void printPun(void) {
   printf("To C, or not to C: That is the question.\n");

}
