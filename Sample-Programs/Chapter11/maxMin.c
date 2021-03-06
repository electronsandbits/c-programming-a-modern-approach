/*
 * File: maxMin.c
 * --------------
 * This program illustrate how pointers are  passed to functions.
 * maxmin finds the largest and smallest elements in an array.
 * When called, we'll pass it pointers to two variables. maxmin will then
 * stores its answers in these variables.
 */

#include <stdio.h>

/* Function prototypes */

void maxMin(int a[], int n, int *max, int *min);

/* Constants */

# define N 10

/* Main  program */

int main() {
   int b[N], i, big, small;

   printf("Finds the largest and smallest elements in an array.\n");
 
   /* Input the numbers */
   printf("Enter %d numbers:  ",  N);
   for (i = 0; i < N; i++) {
      scanf ("%d", &b[i]);
   }

   maxMin(b, N, &big, &small);  /* Function's call */

  /* Output the numbers */ 
   printf("Largest: %d\n", big);
   printf("Smallest: %d\n", small);

   return 0;
}

/*
 * Function: maxMin
 * Usage:maxMin(b, N, &big, &small);
 * ---------------------------------
 * Returns the largest and smallest numbers in the array.
 */

void maxMin(int a[], int n, int *max, int *min) {
   int i;

   *max = *min = a[0];           /* Sets max and min to element 0 */
   for (i = 1; i < n; i++) {
      if (a[i] > *max) {         /* Finds the maximun value */
        *max = a[i];
      } else if (a[i] < *min) {  /* Finds the minimun value */
         *min = a[i];
      }
   }     

}
