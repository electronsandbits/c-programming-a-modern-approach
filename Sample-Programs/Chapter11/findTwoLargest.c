/*
 * FindTwoLargest.c 
 * ----------------
 * When passed an array a[] of length n, the function findTwoLargest(),
 * will search a[] for its largest and second largest elements, 
 * storing them in the variables pointed to by largest and 
 * secondLargest, respectively.
 */

#include <stdio.h>


/* Function prototypes */

void findTwoLargest(int a[], int n, int *largest, int *secondLargest);


/* Constants */
#define MATRIX 12





/* Main Program */

int main() {
   int i, n;
   int matrix[MATRIX]  = {144, 120, 72, 84, 96, 108, 12, 24, 48, 60 36, 1265};

}



/* 
 * Function:findTwoLargest 
 * Usage: void findTwoLargest(largest, secondLargest); 
 * ---------------------------------------------------
 * Returns the largest and the second largest elements.
 */

void findTwoLargest(int a[], int n, int *largest, int *secondLargest) {
   int i;

   /* Find the largest element */
   if (a[0] > a[1]) {
     *largest = a[0];
     *secondLargest = a[1];
   } else {
      *largest = a[1];
      *secondLargest = a[0];
   }
   /* Find the second largest element */
   for (i = 2; i < n; i++) {
      if (a[i] > *largest) {
        *secondLargest = *largest;
        *largest = a[i];
      } else if (a[i] > *secondLargest) {
         *secondLargest = a[i];
      }
   }
}

