//
#include <stdio.h>

void main()
{
  int n = 145, sum;

     sum = sum_of_digits(n);
     printf("Sum of digits = %d\n", sum);
}

int sum_of_digits(int num)
{
  int total = 0;

      while(num > 0)
      {
          total += num % 10;
          num /= 10;
      }

      return total;
}
