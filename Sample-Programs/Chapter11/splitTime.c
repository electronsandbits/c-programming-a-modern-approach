/*
 * File: splitTime.c
 * -----------------
 * 
 */

#include <stdio.h>


/*Function prototypes */

void splitTime(long totalSec, int *hr, int *min, int *sec);


/* Main program */

int main(void) {
   long totalSec = 33621;
   int hr, min, sec;

   splitTime(totalSec, &hr, &min, &sec); /* Function's call */
   printf("Seconds elapsed since midnight: %ld\n", totalSec);
   printf("Hour: %d, Minute: %d, Second: %d\n", hr, min, sec);

   return 0;
}

/*
 * File:splitTime
 * Usage: splitTIme(totalSec, hr, min, sec);
 * -----------------------------------------
 * 
 */

void splitTime(long total_sec, int *hr, int *min, int *sec) {
   *hr = total_sec / 3600;
   total_sec -= *hr * 3600;
   *min = total_sec / 60;
   total_sec -= *min * 60;
   *sec = total_sec;
}
