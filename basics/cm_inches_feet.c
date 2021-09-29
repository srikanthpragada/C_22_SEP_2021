// Calculate inches and feet given centimeters

#include <stdio.h>

void main()
{
   float cm, feet, inches;

      printf("Enter centimeter :");
      scanf("%f",&cm);

      feet = cm / 30;
      inches = cm / 2.5;

      printf("Inches = %.2f, Feet = %.2f", inches,feet);
}

