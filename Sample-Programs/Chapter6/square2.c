/*
 * File:squre2.c
 * -------------
 * This program prints a table of squares using a for statement.
 * The program  will prompt the user to enter a number n. It will 
 * then print n lines of output, with each line containing a number 
 * between 1 and n together with its square.
 */

#include <stdio.h>

int main () {
   int i, n;

   printf("This program prints a table of squares.\n");
   printf("Enter number of entries in table: ");
   scanf("%d", &n);

   for (i = 1; i <= n; i++) {
      printf("%10d%10d\n", i, i * i );
   } 
   
   return 0;
}
