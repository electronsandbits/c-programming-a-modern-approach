/*
 * File: primes.c
 * --------------
 * This program tests whether a given number is prime. 
 * The program will prompt the user to enter a number 
 * then respond with a message indicating whether or not 
 * the number entered is prime.
 */ 

#include <stdio.h>
#include <stdbool.h>

/* Function prototypes */

bool isPrime (int n); 

/* Main program */

int main (void)  {  
   int n; 

   printf("Enter a number:");
   scanf("%d", &n);
   if  (isPrime(n)) {
      printf("Prime\n");
   } else {
      printf("Not prime\n");
   }
   return 0;
}

/*
 * Function: isPrime
 * Usage: isPrime(int n);
 * ----------------------
 * When given a number n, the isPrime() 
 * will the divide  n by each of the 
 * numbers between 2 and the square root of n;
 * If the remainder is ever 0, then that n isn't prime.
 */

bool isPrime (int n) {
    int divisor; 

    if (n <= 1)  return false;
    
    for (divisor = 2; divisor * divisor <= n; divisor++) {
       if (n % divisor  == 0 )  return false;
    return true;  
    } 
}
