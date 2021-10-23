// Display write_names.c

#include <stdio.h>
#define FILENAME  "write_names.c"

void main()
{
  FILE * fp;
  char line[100], *p;
  int lineno = 1;


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

            printf("%3d:%s",lineno,line);
            lineno ++;
       }

       fclose(fp);
}
