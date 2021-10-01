// Check whether number is divisible by 3 and 5

#include <stdio.h>

void main()
{
    int qty,price,disrate, amount, netamount, discount;

        printf("Enter qty    :");
        scanf("%d",&qty);
        printf("Enter price  :");
        scanf("%d",&price);

        switch(qty)
        {
            case 1 : disrate = 5; break;
            case 2 :
            case 3 : disrate = 10; break;
            case 4 :
            case 5 : disrate = 20; break;
            default: disrate = 40;
        }

        amount = qty * price;
        discount = amount * disrate / 100;
        netamount = amount - discount;

        printf("Net amount = %d", netamount);
}

