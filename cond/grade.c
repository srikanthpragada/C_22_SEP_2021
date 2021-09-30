// Print grade based on marks in two subjects

#include <stdio.h>

void main()
{
    int m1,m2;

        printf("Enter marks in two subject :");
        scanf("%d%d",&m1,&m2);

        if(m1 > 50)
            if(m2 > 50)
               printf("A");
            else
               printf("B");
        else
            if (m2 > 50)
               printf("C");
            else
               printf("D");


}

