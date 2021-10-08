// Fill array with random numbers

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void main()
{
  int a[10], i;

       srand(time(0));   // init random seed

       for(i=0; i < 10; i ++)
       {
          a[i] = rand() % 100;
          printf("%d\n", a[i]);
       }
}
