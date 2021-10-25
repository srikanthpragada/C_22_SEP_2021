// Copy source file to target file

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

void main()
{
  FILE * sfp, * tfp;
  char sfile[50], tfile[50];
  int ch;

       printf("Enter source filename :");
       gets(sfile);

       printf("Enter target filename :");
       gets(tfile);

       sfp = fopen(sfile,"rt");
       if(sfp == NULL)
       {
           printf("Sorry! Could not open [%s] file",sfile);
           exit(1); // Terminate program
       }

       tfp = fopen(tfile,"wt");
       if(tfp == NULL)
       {
           printf("Sorry! Could not create [%s] file",tfile);
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

       printf("Copied %s to %s successfully!", sfile,tfile);

}
