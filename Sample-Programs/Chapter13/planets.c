/*
 * File:planet.c
 * -------------
 * This program illustrates how to access command-line arguments.
 * The program is designed to check a series of strings to see
 * which ones are names of planets. When the program is run, the user 
 * will put the strings to be tested on the command line.
 */ 
 
#include <stdio.h>
#include <string.h>

/* Constants */

#define NUM_PLANETS 9

/* Main program */

int main(int argc, char *argv[]) {
  // printf("Checks planet names.\n");
   char *planets[] = {"Mercury", "Venus", "Earth",
	              "Mars", "Jupiter", "Saturn",
		      "Uranus", "Neptune", "Pluto"};
   int i, j;

   for (i = 1; i < argc; i++)  {
      for (j = 0; j < NUM_PLANETS; j++) 
         if (strcmp(argv[i], planets[j]) == 0) {
	   printf("%s is planet %d\n", argv[i], j + 1);
           break;
	 } 

      if (j == NUM_PLANETS) {
	printf("%s is not a planet\n", argv[i]);      
      }
     
   }	      
   
   return 0;

}

