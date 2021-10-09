#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void main()
{
  int a[10],i;
  int gt_50 = 0, le_50 = 0;


   srand(time(0));
   for(i=0; i<10 ; i++)
   {
     a[i] = rand() % 100;
     if(a[i] > 50)
        gt_50 ++;
     else
        le_50 ++;
   }

   printf("Greater than 50 = %d, Less than or equal to 50 = %d ", gt_50,le_50);
}
