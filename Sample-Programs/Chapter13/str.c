/*
 * File: str.c
 * -----------
 * This program demonstrates  writing strings with printf()
 *  and puts(, and reading strings with scanf and gets.
 */
 
#include <stdio.h>
#include <string.h>

/* Constants */
#define SENT_LEN 80;

int main() {
   char str[] = "Are we having fun yet?";
   char sentence [SENT_LEN + 1];

   printf("%s\n", str);
   printf("%.6s\n", str);
   printf("%.13s\n", str);
   
   puts(str);
   
   printf("Enter a sentence: \n");
   scanf("%s", sentence);


   return 0;

}
