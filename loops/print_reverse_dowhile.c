// print the given number in reverse

#include <stdio.h>

void main()
{
    int n;

      printf("Enter a number: ");
      scanf("%d",&n);

      do
      {
          printf("%d", n % 10);
          n /= 10;
      }
      while (n > 0);

} // main()
