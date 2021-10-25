// Copy source file to target file after converting everything to uppercase

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

void main(int argc, char * argv[])
{
  FILE * sfp, * tfp;
  int ch;

       if (argc < 3)  // Required command-line args not given
       {
           printf("Usage : upper <source-file> <target-file>");
           exit(10);
       }

       sfp = fopen(argv[1],"rt");
       if(sfp == NULL)
       {
           printf("Sorry! Could not open [%s] file",argv[1]);
           exit(1); // Terminate program
       }

       tfp = fopen(argv[2],"wt");
       if(tfp == NULL)
       {
           printf("Sorry! Could not create [%s] file",argv[2]);
           exit(2); // Terminate program
       }

       while(1)
       {
             ch = fgetc(sfp);
             if(ch == EOF)
                 break;
             fputc(toupper(ch),tfp);
       }

       fclose(sfp);
       fclose(tfp);

       printf("Copied %s to %s successfully!", argv[1], argv[2]);

}
