// Print an array
#include <stdio.h>

void main()
{
  int a[] = {1,2,3,4,5};
  int b[] = {10,20,30,40,50};

     print_array(b);
}

void print_array(int arr[5])
{
  int i;

      for(i =0; i < 5 ; i ++)
      {
          printf("%d ", arr[i]);
      }
}
