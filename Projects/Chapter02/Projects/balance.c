/*
 * File:balance.c
 * --------------
 * This program asks the user to enter a dollars-and-cents amount,
 * then displays the amount with 5% tax added.
 */

#include <stdio.h>

/* Constants */

#define INTEREST_RATE 1.05f

/* Main program */

int main() {
   float originalAmount, amountWithTax;

   /* Enter the dollars-and-cents amount */
   printf("Enter an amount: ");
   scanf("%f", &originalAmount);

   amountWithTax = originalAmount * INTEREST_RATE;
    
   /* Display the amount with tax added */
   printf("With tax added: $%.2f\n", amountWithTax);

   return 0;
}

