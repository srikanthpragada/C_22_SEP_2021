// Write students info into students.dat

#include <stdio.h>
#define FILENAME "students.dat"

struct student
{
   char name[30];
   int marks;
};

void main()
{
  FILE * fp;
  struct student s;
  int i;

     fp = fopen(FILENAME, "wb");


     for (i = 1; i <= 5; i ++)
     {
        fflush(stdin); // clear keyboard buffer

        printf("Enter name  :");
        gets(s.name);

        printf("Enter marks :");
        scanf("%d",&s.marks);

        // write to file
        fwrite(&s, sizeof(struct student), 1, fp);
     }

     fclose(fp);
}

