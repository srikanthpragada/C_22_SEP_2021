// Print a message with line above and below
#include <stdio.h>

// user-defined function
void print_line(char ch, int len)
{
  int i;

     for(i = 1; i <= len; i ++)
        putch(ch);
}

void main()
{
     print_line('*',20);  // call function
     printf("\nWinners never quit!\n");
     print_line('.',30);
}
