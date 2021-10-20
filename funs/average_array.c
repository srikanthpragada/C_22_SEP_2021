#include <stdio.h>

float average(int [], int);

void main()
{
 int a[10] = {10,21,31,40,53,60,70,87,90,100};
 int b[] = {20,22,12,38,38};

     printf("Average = %.2f\n", average(a,10));
     printf("Average = %.2f\n", average(b,5));

}

// Returns average of the array of given size
float average(int arr[], int len)
{
int i;
float total = 0;

   for(i = 0; i < len; i ++)
   {
       total += arr[i];
   }

   return total / len;
}

