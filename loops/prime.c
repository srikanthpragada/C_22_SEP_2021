// Print all factors for the given number, if factors are present,
// otherwise displays prime number

#include <stdio.h>

void main()
{
    int n,i, found = 0;

      printf("Enter a number: ");
      scanf("%d",&n);

      for(i = 2; i <= n/2 ; i ++)
      {
           if (n % i == 0)
           {
              printf("%d ",i);
              found = 1;
           }
      }

      if (found == 0)
        printf("Prime number!");


} // main()
