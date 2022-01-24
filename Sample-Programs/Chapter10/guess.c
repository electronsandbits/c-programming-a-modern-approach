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

/* Function prototypes */

void initializeNumberGenerator(void);
void chooseNewSecretNumber(void);
void readGuesses(void);

/* Constants */

#define MAX_NUMBER 100

/* external variable */
int secretNumber;

/* Main progam */

int main() {
   char command;

   printf("Guess the secret number between 1 and %d. \n\n", MAX_NUMBER);
   initializeNumberGenerator(); /* Function's call */
 
   do {
     chooseNewSecretNumber();
     printf("A new number has been chosen.\n");
     readGuesses(); /* Function's call */
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
 * Function:chooseNewSecretNumber
 * Usage:
 * ------------------------------
 * Randomly selects a number between 1 and MAX_NUMBER
 * and stores it in secretNumber.
 */

void chooseNewSecretNumber(void) {
   secretNumber = rand()  % MAX_NUMBER + 1 ;
}

/* 
 * Function: readGuesses
 * Usage: 
 * ----------------------
 * Repeatedly reads user guesses and tells the user whether each 
 * guess is too low, too high, or correct. When the guess is correct,
 * prints the total number of guesses and returns.
 */

void readGuesses (void) {
   int guess, numGuesses = 0;
   
   for (; ;) {
      numGuesses++;
      printf("Enter guess: ");
      scanf("%d", &guess);
      if  (guess == secretNumber) {
         printf(" You won in %d guesses!\n\n", numGuesses);
         return;
      } else if (guess < secretNumber) {
         printf("Too low; try again. \n");
      } else {
         printf("Too high; try again.\n");
      }     
   }
}

