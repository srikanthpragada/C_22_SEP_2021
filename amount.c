// Calculate amount based on qty and price
#include <stdio.h>

void main()
{
 int quantity,price,amount;

   printf("Enter the quantity:");
   scanf("%d",&quantity);

   printf("Enter the price:");
   scanf("%d",&price);

   amount = quantity * price;
   printf("Amount = %d",amount);
}
