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

      if (strcmp(name,largest) > 0)
          strcpy(largest,name);   // Copy name to largest
    }

    printf("Largest name = %s", largest);
}
