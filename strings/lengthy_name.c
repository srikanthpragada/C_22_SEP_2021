// Take names and display name with largest length

#include <stdio.h>

void main()
{
  char name[30], largest[30];

    strcpy(largest,"");

    while(1)  // infinite loop
    {
      printf("Enter name [end to stop] :");
      gets(name);

      if (stricmp(name,"end") == 0)
          break;

      if (strlen(name) > strlen(largest))
          strcpy(largest,name);   // Copy name to largest
    }

    printf("Name with largest length is %s", largest);
}
