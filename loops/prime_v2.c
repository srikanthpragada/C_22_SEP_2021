// Print whether a number is prime or not

#include <stdio.h>

void main()
{
    int n,i,prime=1;

      printf("Enter a number: ");
      scanf("%d",&n);

      for(i = 2; i<= n/2; i++)
      {
         if (n % i == 0)
         {
            prime = 0;  // not a prime number
            break;
         }
      }

      if(prime == 1)
           printf("%d prime number",n);
      else
           printf("%d is not prime number",n);
} // main()
