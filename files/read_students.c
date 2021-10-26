// Read students info from students.dat

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
  int count;

     fp = fopen(FILENAME, "rb");

     while(1)
     {
        // read from  file
        count = fread(&s, sizeof(struct student), 1, fp);
        if (count == 0) // EOF
            break;

        printf("%-30s  %3d\n", s.name, s.marks);
     }

     fclose(fp);
}

