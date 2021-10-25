// Convert source file to uppercase or lowercase and write to target file
// convert  source target  [-l|-u]
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

#define UPPER 1
#define LOWER 2
#define NONE 0

void main(int argc, char * argv[])
{
  FILE * sfp, * tfp;
  int ch;
  int tocase = NONE; // no conversion

       if (argc < 3)  // Required command-line args not given
       {
           printf("Usage : convert <source-file> <target-file>  [-u|-l]");
           exit(10);
       }

       if (argc >= 4)
       {
           if (stricmp(argv[3],"-u") == 0)  // uppercase
               tocase = UPPER;
           else
              if (stricmp(argv[3], "-l") == 0)  // lowercase
                 tocase = LOWER;
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

             if(tocase == UPPER)   // uppercase
                 ch = toupper(ch);
             else
                if(tocase == LOWER)  // lowercase
                   ch = tolower(ch);

             fputc(ch,tfp);
       }

       fclose(sfp);
       fclose(tfp);

       printf("Converted %s to %s successfully!", argv[1], argv[2]);

}
