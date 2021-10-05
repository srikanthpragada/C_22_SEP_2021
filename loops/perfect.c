// Print whether a number is perfect

#include <stdio.h>

void main()
{
    int n,i,sum = 1;

      printf("Enter a number: ");
      scanf("%d",&n);

      for(i = 2; i <= n/2 ; i ++)
      {
           if (n % i == 0)
              sum += i;
      }

      if (sum == n)
         printf("Perfect Number!");
      else
         printf("Not a perfect number!");

} // main()
