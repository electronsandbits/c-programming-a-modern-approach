/* 
 * File:prime.c 
 * -------------
 * This program tests whether a number is prime.
 * The program will prompt the user to enter a number,
 * then respond with a message indicating whether
 * or not the number is prime.
 * To test my algorithm, I will write a main program 
 * that lists the prime numbers between 1 and 100.
 */

#include <stdio.h>
#include <stdbool.h>

/* Function prototypes */

bool isPrime (int n);

/* Main program */

int main ()  {
   int n, prime, div;
   bool isPrime;
   
   printf("Lists the prime numbers between 1 and 100\n");
   for (prime = 2; prime <= 100; ++prime) {
      isPrime = true;
      for (div = 2; div < prime; ++div) {
         if (prime % div == 0) {
	   isPrime = false;
	 }
         if (isPrime != false ) {
           printf("%d\n   ", prime); 
 	 }		 
      }	      
i   }
   
   printf("\n");

   printf("This program tests whether a number is prime.\n");
   printf("Enter a number: ");
   scanf("%d", &n);

   if  (isPrime(n)) {
      printf("Prime number\n"); 
   } else {
      printf("Not a prime number\n");
   }
   
   return 0;
}

/*
 * Function: isPrime 
 * Usage:isPrime (int n)
 * ---------------------
 * This function  returns True if is parameter 
 * is a prime number and false if it isn't.
 * When given a number n, the isPrime function will divide 
 * n by each of the numbers between 2 and the square root of n;
 * If the remainder is ever 0, that n isn't prime.
 */

bool isPrime (int n) {
   int divisor; 

   if (n <= 1) {
     return false;
   } 
   for (divisor = 2; divisor * divisor <= n; divisor++) {
      if (n % divisor  == 0 ) {  /* Not a prime number */
        return false;
      }
   return true;  
   }
}
