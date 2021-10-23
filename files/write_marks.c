// Take marks from user and write them into marks.txt

#include <stdio.h>

void main()
{
  FILE * fp;
  int marks;

       fp = fopen("marks.txt","wt");

       while(1)
       {
           printf("Enter marks [-1 to stop] :");
           scanf("%d",&marks);

           if(marks == -1)
                break;

           fprintf(fp,"%d\n",marks);   // Write into file
       }

       fclose(fp);
}
