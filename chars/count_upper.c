// Take 5 chars and display count of uppercase letters

void main()
{
  char ch,count = 0, i;

    for(i = 1; i <= 5; i ++)
    {
      printf("\nEnter char: ");
      ch = getche();

      if(isupper(ch))
         count ++;

   } // end of for

   printf("\nCount = %d",count);

}
