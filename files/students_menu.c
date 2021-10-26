// Read one student's info from students.dat based on rollno

#include <stdio.h>
#define FILENAME "students.dat"

struct student
{
   char name[30];
   int marks;
};

void add_students()
{
  FILE * fp;
  struct student s;
  int i;

     fp = fopen(FILENAME, "ab"); // Append mode

     while(1)
     {
        fflush(stdin); // clear keyboard buffer

        printf("Enter name [end to stop]:");
        gets(s.name);

        if (stricmp(s.name,"end") == 0)
              break;

        printf("Enter marks :");
        scanf("%d",&s.marks);

        // write to file
        fwrite(&s, sizeof(struct student), 1, fp);
     }

     fclose(fp);

}

void line(int len)
{
 int i;

    for(i = 1; i <= len ; i ++)
          putch('-');
}

void list_students()
{
  FILE * fp;
  struct student s;
  int count;

     fp = fopen(FILENAME, "rb");

     printf("\nStudents\n");
     line(50);
     printf("\n");
     while(1)
     {
        // read from  file
        count = fread(&s, sizeof(struct student), 1, fp);
        if (count == 0) // EOF
            break;

        printf("%-30s  %3d\n", s.name, s.marks);
     }

     fclose(fp);

     line(50);
     printf("\n");
}

void get_student()
{
 FILE * fp;
  struct student s;
  int rollno,pos, count;

     fp = fopen(FILENAME, "rb");

     while(1)
     {
         printf("Enter rollno [0 to stop] :");
         scanf("%d",&rollno);

         if (rollno == 0)
            break;

         pos = (rollno - 1) * sizeof(struct student);

         fseek(fp, pos, SEEK_SET);  // Random access

         // read from  file
         count = fread(&s, sizeof(struct student), 1, fp);
         if (count == 1)
            printf("%-30s  %3d\n", s.name, s.marks);
         else
            printf("Sorry! Rollno not found!\n");

     }

     fclose(fp);

}
void update_student()
{


}

void main()
{
    int choice;

      while(1)
      {
          printf("\nMenu\n");
          line(20);
          printf("\n1.Add Students\n");
          printf("2.List Students\n");
          printf("3.Get Student\n");
          printf("4.Update Marks\n");
          printf("5.Quit\n");
          printf("Choice :");
          scanf("%d",&choice);

          switch(choice)
          {

              case 1 : add_students(); break;
              case 2 : list_students(); break;
              case 3 : get_student(); break;
              case 4 : update_student(); break;
              case 5 : exit(0);
          }
      }
}

