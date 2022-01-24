/*
 * File: sumArray.c 
 * ----------------
 * This program illustrates the use of one-dimensional array 
 * arguments. When given an array a of int values, sumArray
 * returns the  sum of the elements in a.
 * Since sum_Array needs to know the length of a, we must supply  * it  as a  second argument.
 */

#include <stdio.h>


/* Function prototypes */

int sumArray (int a[], int n);


/* Constants */

#define LEN 100

/* Main program */

int main() {
   int b[LEN], total;



   total = sumArray(b, LEN); /* Function's call */

}

/* 
 * Function: sumArray
 * Usage: sum = sumArray(b, LEN);
 * ------------------------------
 *
 */

int sumArray(int a[], int n) {
   int i, sum = 0;

   for (i = 0; i < n; i++) {
      sum+= a[i];
   }
   return sum;

}
