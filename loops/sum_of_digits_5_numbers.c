// print sum of digits for 5 numbers

#include <stdio.h>

void main()
{
    int n, i, sum = 0;

     for(i = 1; i <= 5; i ++)
     {
        printf("Enter a number: ");
        scanf("%d",&n);

        while (n > 0)
        {
          sum += n % 10;
          n /= 10;
        } // while

     } // for

     printf("Sum of digits = %d", sum);

} // main()
