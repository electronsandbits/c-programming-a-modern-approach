/*
 * File: xor.c
 * -----------
 * The following xor.c encrypts a message by XORing each character
 * with the & character.The original message an be altered by the user
 * or read from a file using input redirection, the encrypted message
 * can be viewed on the screen or saved in a file using output redirection.
 */

#include < stdio.h>
#include <ctype.h>

#define KEY '&'

int main (void) {
   int origChar, newChar;

   while ((origChar = getchar()) != EOF) {
      newChar = origChar ^ KEY;
      if  (isprint(origChar) && isprint(newChar)) {
	 putchar (newChar);      
      } else { 
	 putchar (origChar);
      }	 

      return 0;
   }

}

