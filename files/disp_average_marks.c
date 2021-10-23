// Display average marks from marks.txt

#include <stdio.h>
#include <stdlib.h>
#define FILENAME  "marks.txt"

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
            // Convert string to int
            n = atoi(line);

            if(n == 0)   // if conversion fails then ignore the line
                continue;

            total += n;
            count ++;
       }

       fclose(fp);
       printf("Average marks : %d", total / count);
}
