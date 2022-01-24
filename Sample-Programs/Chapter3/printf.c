/*
 * File: printf.c 
 * --------------
 * This program illustrates the use of printf()
 * @author:K.N.King
 * @version:2018(by @electronsandbits)
 */


#include <stdio.h>

int main() {
   int i, j;
   float x, y;

   i = 10;
   j = 20;
   x = 43.2892f;
   y = 5527.0f;

   
   printf("i = %d, j = %d, x = %f, y = %f\n", i, j, x, y);

   //printf("%d %d\n", i);  / * WRONG */
   // printf("%d\n", i, j);  / * WRONG */
   // printf("%d %f\n", i, x);  / * WRONG */

   return 0;
  
}
