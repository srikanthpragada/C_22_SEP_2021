// Take 5 chars and display count of uppercase letters

void main()
{
  char ch,count = 0, i;

    printf("Enter pin : ");
    for(i = 1; i <= 4; i ++)
    {
      ch = getch();
      putch('*');

      if(isdigit(ch))
         count ++;

   } // end of for

   if(count == 4)
     printf("\nValid PIN");
   else
     printf("\nNot a valid PIN");
}
