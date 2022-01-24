/*
 * File: maximum.c
 * ---------------
 * This program prompts the user to enter two integers,
 * after entering the numbers the function returns the 
 * maximum value.
 */

#include <stdio.h>

/* Function prototypes */

int *max(int *a, int *b);

/* Main Program */

int main() {
   int *p , i, j;	
   printf("Prints the maximum integer value\n");
   printf("Please enter two integers: ");
   scanf("%d, %d", &i, &j); 
   
   //if  (i > j) { 
     // printf("Maximum = %d\n", i);
   //} else {
     // printf("Maximum = %d\n",  j);
   //}  

   /* Function's call */
   p = max(&i, &j);
   //printf("The maximum value is\n", p);
   return 0;
}

/*
 * Funtion: max
 * usage: p = max (&i, &j);
 * ------------------------
 *  Returns the maximum integer value.
 */
 
 int *max(int *a, int *b) {
     if  (*a > *b)  {
        return a;
     }  else {
         return b; 
     } 
}

