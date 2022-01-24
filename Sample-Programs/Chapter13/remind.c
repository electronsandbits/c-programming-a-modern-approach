/*
 * File: remind.c
 * --------------
 * This program prints a one-month list of daily reminders.
 * The user will enter a series of reminders, with each prefixed by 
 * a day of the month. When the user enters 0 instead of a valid day,
 * the program will print a list of all reminders entered sorted by day.
 */

#include <stdio.h>
#include <string.h>

/* Function prototype */

int readLine(char str[], int n);

/* Constants */

#define MAX_REMIND 50   /* maximum number of reminders */
#define MSG_LEN 60      /*  max lenght of reminder message */

/* Main program */

int main () {
   printf("Prints a one-month reminder list.\n");
   
   char reminders[MAX_REMIND] [MSG_LEN +3 ];
   char dayStr[3], msgStr[MSG_LEN + 1];
   int day, i, j, numRemind = 0;

   for (; ;)  {
      if (numRemind == MAX_REMIND) {
        printf(" -- No space left --\n");
	break;
      }
      
      printf("Enter day and reminder:  ");
      scanf("%2d", &day);
      if (day == 0 )  {
        break;
      }
      sprintf(dayStr, "%2d", day);
      readLine(msgStr, MSG_LEN); /* Function's call */

      for (i = 0; i < numRemind; i++) {
         if (strcmp(dayStr, reminders[i]) < 0) {
           break;		 
         }
      }
       for (j = numRemind; j > i; j--) {  
          strcpy(reminders[j], reminders[j-1]);
       }

       strcpy(reminders[i], dayStr);
       strcat(reminders[i], msgStr);

       numRemind++;

     } 

     printf("\nDay Reminder\n");
     for ( i = 0; i < numRemind; i++) {
        printf(" %s\n", reminders[i]);
     }
     
     return 0;
}

/*
 * Function: readLine()
 * Usage: reaLine(char , n);
 * -------------------------
 *
 */

int readLine(char str[], int n) {
   int ch, i = 0;

   while ((ch = getchar()) != '\n') {
      if (i < n) {
        str [i++] = ch;
      }	      
   }
   
   str[i] = '\0';
   return i;
   
}



