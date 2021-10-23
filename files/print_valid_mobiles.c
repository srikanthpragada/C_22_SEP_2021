// Display valid mobile numbers from mobiles.txt

#include <stdio.h>
#include <stdlib.h>
#define FILENAME  "mobiles.txt"

int ismobile(char s[])
{
 int i;

    if(strlen(s) != 10)
        return 0;

    for(i=0; s[i] != '\0' ; i ++)
    {
        if (! isdigit(s[i]))
              return 0;
    }

    return 1;  // Valid mobile number
}

void main()
{
  FILE * fp;
  char line[100], *p;
  int  n, total = 0, count = 0;

       fp = fopen(FILENAME,"rt");
       if(fp == NULL)
       {
           printf("Sorry! Could not open [%s] file",FILENAME);
           exit(1); // Terminate program
       }

       while(1)
       {
            p = fgets(line,100,fp); // read one line
            if(p == NULL)  // EOF
                break;

            // remove \n at the end
            line[strlen(line) - 1] = '\0';

            if (ismobile(line))
                 puts(line);
       }

       fclose(fp);

}
