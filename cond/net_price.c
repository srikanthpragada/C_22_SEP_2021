// Calculate net price

#include <stdio.h>

void main()
{
   float price,discount, netprice;

      printf("Enter price :");
      scanf("%f",&price);

      if(price > 10000)
      {
         discount = price * .20;
      }
      else
      {
         discount = price * .10;
      }

      netprice = price - discount;
      printf("Net Price = %.2f", netprice);
}

