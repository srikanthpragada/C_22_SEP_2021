#include <stdio.h>

float average(int,int);  // Prototype Declaration

void main()
{
  float avg;

    avg = average(10,11); // call
    printf("%f", avg);
}

// Function Definition
float average(int n1, int n2)
{
   return  (n1 + n2) / 2.0;
}
