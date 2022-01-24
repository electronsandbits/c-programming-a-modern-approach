/* 
 * File: volume2.c 
 * ---------------
 * This program computes the dimensional weight of a box
 * from iput provided by the user.
 * @author:K.N. King
 * @version: 2018
 */

#include <stdio.h>

/* Constants */

#define INCHES_PER_POUND 166


/* Main Program */

int main () {
   printf("Computes the dimensional weight of a box from input provided by the user\n");
   int height, length, width, volume, weight;
 
   printf("Enter height of box: ");
   scanf("%d", &height);
   printf("Enter length of box: ");
   scanf("%d", &length);
   printf("Enter width of box: ");
   scanf("%d", &width);

   volume = height * length * width;
   weight = (volume + 165) / INCHES_PER_POUND;
  
   printf("Dimensions: %dx%dx%d\n", length, width, height);
   printf("Volume (cubin inches): %d\n", volume);
   printf("Dimensional weight(pounds): %d\n", weight);

   return 0;
}
