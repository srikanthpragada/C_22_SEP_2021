// Menu to manage students.dat

#include <stdio.h>
#define FILENAME "students.dat"
#define TEMPFILE "tempstudents.dat"

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
  FILE * fp;
  struct student s;
  int rollno,pos,count;

     fp = fopen(FILENAME, "r+b");

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
         {
             printf("Enter marks :");
             scanf("%d",&s.marks);
             // Write student record back to file
             fseek(fp, pos, SEEK_SET);
             fwrite(&s,sizeof(struct student),1,fp);
         }
         else
            printf("Sorry! Rollno not found!\n");
     }

     fclose(fp);

}

void delete_student()
{
   FILE * fp, *tfp;
   struct student s;
   int rollno,pos,count, found = 0;

     fp = fopen(FILENAME, "rb");

     printf("Enter rollno to delete  :");
     scanf("%d",&rollno);

     // create temp file
     tfp = fopen(TEMPFILE,"wb");
     pos = 1;
     while (1)
     {
         count = fread(&s, sizeof(struct student), 1, fp);
         if (count == 0)  // EOF
            break;

         if (rollno != pos)  // write if rollno is not to be deleted
            fwrite(&s,sizeof(struct student),1,tfp);
         else
            found = 1;

         pos ++;
     }

     fclose(fp);
     fclose(tfp);

     if(found)
     {
       remove(FILENAME);           // Delete original file
       rename(TEMPFILE, FILENAME); // Rename temp file as original file
       printf("\nDeleted Student with Rollno : %d\n",rollno);
     }
     else
       printf("\nSorry! Did not find Student with Rollno : %d\n",rollno);

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
          printf("5.Delete Student by Rollno\n");
          printf("6.Quit\n");
          printf("Choice :");
          scanf("%d",&choice);

          switch(choice)
          {
              case 1 : add_students(); break;
              case 2 : list_students(); break;
              case 3 : get_student(); break;
              case 4 : update_student(); break;
              case 5 : delete_student(); break;
              case 6 : exit(0);
          }
      }
}

