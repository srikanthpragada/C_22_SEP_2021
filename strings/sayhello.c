#include <stdio.h>

void main()
{
  char name[30];


     printf("Enter your name :");
     // scanf("%s", name);
     gets(name);

     printf("Hello %s", name);
}
