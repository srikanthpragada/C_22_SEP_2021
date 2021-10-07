//  Take 5 numbers and display how many of them are prime

#include <stdio.h>

void main()
{
    int n,c, i,prime, count = 0;

     for(c = 1; c <= 5; c ++)
     {
       prime = 1;

       printf("Enter a number: ");
       scanf("%d",&n);

       for(i = 2; i <= n/2 ; i ++)
       {
           if (n % i == 0)
           {
              prime = 0;
              break;
           }
       } // for

       if (prime == 1)
         count ++;

     } // outer for

     printf("Count = %d", count);

} // main()
