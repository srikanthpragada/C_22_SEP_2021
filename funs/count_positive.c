#include <stdio.h>

int count_positive(int arr[])
{
 int c = 0,i;

    for(i=0;i<5;i++)
    {
       if(arr[i] > 0)
          c = c + 1;
    }
    return c;
}

void main()
{
  int a[5] = {1,6,-5,32,0};

  int count = count_positive(a);

  printf("%d",count);
}
