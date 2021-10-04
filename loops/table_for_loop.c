// print table for the given number

#include <stdio.h>

void main()
{
    int n,i;

      printf("Enter a number: ");
      scanf("%d",&n);

      for(i = 1; i <= 20 ; i ++)
      {
          printf("%5d * %5d = %5d\n", n, i, n * i);
      }

} // main()
