/*
 * File:guess.c 
 * ------------
 * This program illustrates a simple game-playing.
 * The program generates a random number between 1 and 100, which
 * the user attempts to guess in as few tries as possible.
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/* Constants */

 #define MAX_NUMBER 100

/* Function prototypes */

void initializeNumberGenerator(void);
void newSecretNumber(void);
void readGuesses(int secretNumber);

/* Main progam */

int main() {
   printf("Asks user to guess a hidden number.\n");     
   char command;
   int secretNUmber;

   printf("Guess the secret number between 1 and %d. \n\n", MAX_NUMBER);
   initializeNumberGenerator(); /* Function's call */
 
   do {
     secretNumber = newSecretNumber();
     printf("A new number has been chosen.\n");
     readGuesses(secretNumber); /* Function's call */
     printf("Play again? (Y/N) ");
     scanf("  %c",  &command);
     printf("\n");
   } while (command == 'y' || command == 'Y');
  
   return 0;
}

/* 
 * Function: initializeNumberGenerator
 * Usage:
 * ------------------------------------
 * Initializes the random number generator using the time of day.
 */

void initializeNumberGenerator(void) {
   srand((unsigned) time(NULL));
}

/*
 * Function:newSecretNumber
 * Usage:
 * ------------------------
 * Returns a randomly chosen  number between 1 and MAX_NUMBER
 */

int newSecretNumber(void) {
   return  rand()  % MAX_NUMBER + 1 ;
}

/* 
 * Function: readGuesses
 * Usage: 
 * ----------------------
 * Repeatedly reads user guesses and tells the user whether each 
 * guess is too low, too high, or correct. When the guess is correct,
 * prints the total number of guesses and returns.
 */

void readGuesses (int secretNumber) {
   int guess, numGuesses = 0;
   
   for (; ;) {
      numGuesses++;
      printf("Enter guess: ");
      scanf("%d", &guess);
      if  (guess == secretNumber) {
         printf(" You won in %d guesses!\n\n", numGuesses);
         return;
      } else if (guess < secretNumber) {
         printf("Too low; try again.\n");
      } else {
         printf("Too high; try again.\n");
      }     
   }
}

