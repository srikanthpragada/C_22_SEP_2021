#include <stdio.h>

void main()
{
  char names[5][30];  // 5 strings
  int i;

    for(i = 0 ; i < 5; i ++)
    {
      printf("Enter name :");
      gets(names[i]);
    }

    for(i = 0 ; i < 5; i ++)
    {
      puts(strupr(names[i]));
    }
}
