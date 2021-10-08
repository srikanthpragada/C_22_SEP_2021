// Linear Search

#include <stdio.h>

void main()
{
  int a[10]= {18,65,9,47,88,38,3,774,76,23},i;
  int n, found = 0;

   printf("Enter a number :");
   scanf("%d",&n);

   for(i = 0; i < 10 ; i++)
   {
      if (a[i] == n)
      {
        printf("Found at %d",i);
        found = 1;
        break;
      }
   }

   if(found == 0)
     printf("Not found!");
}
