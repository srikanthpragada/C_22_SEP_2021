// Largest of 3 numbers - version 3

#include <stdio.h>

void main()
{
    int a,b,c, big;

        printf("Enter three numbers  :");
        scanf("%d%d%d",&a,&b,&c);

        big = a;

        if(b > big)
            big = b;

        if(c > big)
            big = c;

        printf("%d", big);
}

