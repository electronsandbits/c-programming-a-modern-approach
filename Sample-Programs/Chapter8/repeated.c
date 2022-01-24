/*
 * File: repeated.c 
 * ----------------
 * This program checks whether any of the digits in a number appear 
 * more than once. After the user enters a number, the program prints either 
 * Repeated digit or No repeated digit. The program uses an array of boolean 
 * values to keep track of which digits appear in a number.
 * The array name digitSeen, is indexed from 0 to 9 to correpond to the
 * 10 possible digits.
 * When given a number n, the program examines n's digits one at a time, storing
 * each into the digit variable and then using it as an index into digitSeen.
 * If digitSeen[digit] is true, then digit appears at least twice in n.On the 
 * other hand, if digitSeen[digit] is false, then digit has not been seen
 * before, so the program sets digitSeen[digit] to true and keeps going.
 */

#include <stdio.h>
#include <stdbool.h>

int main() {
   bool digitSeen[10] = {false};
   int digit;
   long n;

   printf("This program checks numbers for repeated digits.\n");
   printf("Enter a number: ");
   scanf("%ld", &n);
 
   while (n > 0) {
      digit = n % 10;        /* Extract the last  digit of the number */
      if (digitSeen[digit]) {
        break;
        digitSeen[digit] = true;
        n /= 10;         /* The rest of the number - except the last one */
      }
    }
    if (n > 0) {
      printf("Repeated digit\n");
    }else {
      printf("No repeated digit\n");
    }

    return 0;
}




