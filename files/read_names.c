// Display names.txt

#include <stdio.h>
#define FILENAME  "names.txt"

void main()
{
  FILE * fp;
  int ch;

       fp = fopen(FILENAME,"rt");
       if(fp == NULL)
       {
           printf("Sorry! Could not open %s file",FILENAME);
           exit(1); // Terminate program
       }

       while(1)
       {
            ch = fgetc(fp);
            if (ch == EOF)
                 break;
            putch(ch);
       }

       fclose(fp);
}
