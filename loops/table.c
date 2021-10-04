// print table for the given number

#include <stdio.h>

void main()
{
    int n,i;

      printf("Enter a number: ");
      scanf("%d",&n);

      i = 1;
      while (i <= 20)
      {
          printf("%5d * %5d = %5d\n", n, i, n * i);
          i ++;
      }

} // main()
