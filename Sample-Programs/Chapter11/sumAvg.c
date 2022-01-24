/*
 * File:sumAvg.c 
 * ------------- 
 * The following function supposedly computes the sum and average
 * of the numbers  in the array a, which has length n. avg and 
 * sum point to variables that the  function should modify.
 * Unfortunately, the function contains several errors;
 * find and correct them.
 *
 * void avg_sum(double a[], int n, double *avg, double *sum)
 * {
 *   int i;
 *
 *   sum = 0.0;
 *   for (i = 0; i < n; i++)
 *     sum += a[i];
 *   avg = sum / n;
 * }
 */

#include <stdio.h>


/* Function prototypes */

void sumAvg(double a[], int n, double *avg, double *sum);


/* Constants */

#define NUMS 7

/* Main program */

int main(void) {
   int i;
   double a[NUMS], avg, sum;

   printf("\nEnter %d numbers: ", NUMS);
   for (i = 0; i < NUMS; i++) {
      scanf(" %lf", &a[i]);
   }
   sumAvg(a, NUMS, &avg, &sum); /* Function's call */

   printf("Average: %.2lf\nsum %.2lf\n\n", avg, sum);

   return 0;
}

/*
 * Function: sumAvg
 * Usage:
 * ------------------
 * Returns the sum and average of an array.
 */

void sumAvg(double a[], int n, double *avg, double *sum) {
   int i;

   *sum = 0.0;
   for (i = 0; i < n; i++)
     *sum += a[i];
     *avg = *sum / n;
}
