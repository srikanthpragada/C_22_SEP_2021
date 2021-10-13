// Print a message with line above and below
#include <stdio.h>

// user-defined function
void print_line()
{
  int i;

     for(i = 1; i <= 20; i ++)
        putch('=');
}

void main()
{

     print_line();  // call function
     printf("\nWinners never quit!\n");
     print_line();
}
