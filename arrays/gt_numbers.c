// Count how many numbers are greater than the given numbers in the array

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void main()
{
    int a[10]= {21,35,67,13,2,9,67,54,98,10};
    int i,n,gt_n = 0;

     printf("Enter a number : ");
     scanf("%d", &n);

     for (i=0; i<10; i++)
     {
        if(a[i] > n)
        {
            gt_n ++;
            printf("%5d", a[i]);
        }
     }
     printf("\nGreater numbers : %d", gt_n);
}
