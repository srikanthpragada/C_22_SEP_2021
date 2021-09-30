// Print type of person based on age

#include <stdio.h>

void main()
{
    int age;

        printf("Enter age :");
        scanf("%d",&age);

        if (age < 25)
           printf("Young");
        else
         if(age < 60)
           printf("Middle Aged");
         else
           printf("Old");
}

