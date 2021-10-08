// Take 8 chars and display whether it is a valid password
// Valid password contains one digit and one uppercase

#include <stdio.h>
#include <conio.h>
#include <ctype.h>

void main()
{
  char ch,upper=0, digit=0, i;

    printf("Enter password: ");
    for(i = 1; i <= 8; i ++)
    {
      ch = getch();
      putch('*');

      if(isupper(ch))
         upper = 1;
      else
         if (isdigit(ch))
            digit = 1;

    } // end of for

    if(upper && digit)
     printf("\nValid Password!");
    else
     printf("\nInvalid Password!");
}
