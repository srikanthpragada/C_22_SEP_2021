// Take 5 numbers and display sum

#include <stdio.h>

void main()
{
    int n, sum = 0, i;

      for(i = 1; i <= 5; i ++)
      {
          printf("Enter a number [0 to stop] : ");
          scanf("%d",&n);

          if(n == 0)
              break;

          sum += n;
      }

      printf("Sum = %d", sum);

} // main()
