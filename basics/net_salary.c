// To calculate the net salary of the employee
// With 35% HRA,20% DA, 2% PF

#include <stdio.h>

void main()
{
 int basic_salary,hra,da,pf,gross_salary, net_salary;

  // Input
  printf("Enter the basic salary: ");
  scanf("%d",&basic_salary);

  //calculations
  hra = basic_salary * 35 / 100;
  da = basic_salary * 20 / 100;
  gross_salary = basic_salary + hra + da;
  pf = gross_salary * 2 / 100;
  net_salary = gross_salary - pf;

  //Output
  printf("Basic Salary   :   %8d\n",basic_salary);
  printf("+ HRA          :   %8d\n",hra);
  printf("+ DA           :   %8d\n",da);
  printf("                   --------\n");
  printf("Gross salary   :   %8d\n",gross_salary);
  printf("- PF           :   %8d\n",pf);
  printf("                   --------\n");
  printf("Net salary     :   %8d\n",net_salary);

}
