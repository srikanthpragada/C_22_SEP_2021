// Reverse an array

#include <stdio.h>

void main()
{
  int a[10]= {18,65,9,47,88,38,3,774,76,23};
  int i,j,temp;


   printf("\nOriginal Array  = ");

   for(i = 0; i < 10 ; i++)
   {
      printf("%5d", a[i]);
   }

   for(i = 0, j = 9; i < j; i++, j--)
   {
      temp = a[i];
      a[i] = a[j];
      a[j] = temp;
   }

   printf("\nReversed Array  = ");

   for(i = 0; i < 10 ; i++)
   {
      printf("%5d", a[i]);
   }
}
