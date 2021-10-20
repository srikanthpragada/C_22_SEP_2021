
struct student
{
   int admno;
   char name [30];
   char gender;
   int feepaid;
};

void main()
{
  struct student s1;

      s1.admno = 1;
      strcpy(s1.name,"David");
      s1.gender = 'm';
      s1.feepaid = 5000;

      printf("%5d  %-30s %c  %5d", s1.admno, s1.name, s1.gender, s1.feepaid);

}
