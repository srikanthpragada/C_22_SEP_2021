// Calculate net price

#include <stdio.h>

void main()
{
   float price,discount, tax, netprice;

      printf("Enter price :");
      scanf("%f",&price);

      if(price > 10000)
      {
         discount = price * .20;
         tax = price *.05;
      }
      else
      {
         discount = price * .10;
         tax = price * 0.02;
      }

      netprice = price - discount;
      printf("Net Price = %.2f", netprice);
}

