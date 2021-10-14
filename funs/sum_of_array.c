// Function returns a value
#include <stdio.h>

void main()
{
  int a[] = {1,2,3,4,5};
  int b[] = {10,20,30,40,50};
  int total;


     total = sum(a);
     printf("Total = %d\n", total);
     total = sum(b);
     printf("Total = %d", total);
}

int sum(int arr[5])
{
  int i, total;

      total = 0;
      for(i =0; i < 5 ; i ++)
      {
           total += arr[i];
      }

      return total;
}
