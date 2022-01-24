/*
 * File:length2.c
 * -------------
 * This program  illustrates how characters are read. 
 * This program calculates the length of a message. 
 * After the user enters  the message,
 * the program displays the length.
 */

#include <stdio.h>
 
int main() {
   int len = 0;

   printf("Determines the length of a message.\n");
   printf("Enter a message: ");
   
   while (getchar() != '\n') {  /* Skips rest of line */
      len++;
   }
   printf("Your message was %d characters(s) long. \n", len);
  
   return 0;
}
