// Read one student's info from students.dat based on rollno

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
  int rollno,pos, count;

     fp = fopen(FILENAME, "rb");

     printf("Enter rollno :");
     scanf("%d",&rollno);

     pos = (rollno - 1) * sizeof(struct student);

     fseek(fp, pos, SEEK_SET);  // Random access

     // read from  file
     count = fread(&s, sizeof(struct student), 1, fp);
     if (count == 1)
        printf("%-30s  %3d\n", s.name, s.marks);
     else
        printf("Sorry! Rollno not found!");


     fclose(fp);
}

