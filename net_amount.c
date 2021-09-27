// Calculate net amount based on qty and price
// 10% discount, 5% tax

#include <stdio.h>

void main()
{
 int quantity,price,amount, discount,
     gross_amount, tax, net_amount;

   // Input
   printf("Enter the quantity: ");
   scanf("%d",&quantity);

   printf("Enter the price: ");
   scanf("%d",&price);

   // Calculations
   amount = quantity * price;
   discount = amount * 10 / 100;
   gross_amount  = amount - discount;
   tax = gross_amount * 5 / 100;
   net_amount = gross_amount + tax;


   // Output
   printf("Amount          : %6d\n",amount);
   printf(" - Discount     : %6d\n",discount);
   printf("After discount  : %6d\n",gross_amount);
   printf(" + Tax          : %6d\n",tax);
   printf("Net Amount      : %6d\n",net_amount);

}
