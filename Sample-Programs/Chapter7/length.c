/*
 * File:length.c
 * -------------
 * This program  illustrates how characters are read. 
 * The program calculates the length of a message. 
 * After the user enters the message, the program displays the length.
 */

#include <stdio.h>
 
int main() {
   char ch;
   int len = 0;

   printf("Determines the length of a message.\n");
   printf("Enter a message: ");
   ch = getchar();
   while (ch != '\n') {   /* skips rest of line */
      len++;
      ch = getchar();
   }
   printf("Your message was %d characters(s) long.\n", len);
  
   return 0;
}
 
