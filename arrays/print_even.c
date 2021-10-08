#include <stdio.h>

void main()
{
  int a[10]={18,65,9,47,88,38,3,774,76,23},i;


   for(i=0; i<10 ; i++)
   {
     if(a[i] % 2 == 0)
        printf("%d\n",a[i]);
   }
}
