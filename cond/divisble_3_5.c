// Check whether number is divisible by 3 and 5

#include <stdio.h>

void main()
{
    int num;

        printf("Enter a number  :");
        scanf("%d",&num);

        if(num % 3 == 0)
            if(num % 5 == 0)
               printf("1");
            else
               printf("2");
        else
            if(num % 5 == 0)
                printf("3");
            else
                printf("4");

}

