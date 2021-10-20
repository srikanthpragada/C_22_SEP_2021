void main()
{
 int a[10] = {10,21,31,40,53,60,70,87,90,100};

    even_odd(a);
    print(a);

}

// Replace all even numbers with 1 and odd numbers with 0 in the array
void even_odd(int arr[])
{
int i;
   for (i = 0; i < 10; i ++)
   {
       if (arr[i] % 2 == 0)
           arr[i] = 1;
       else
           arr[i] = 0;
   }
}

void print(int arr[])
{
int i;

   for (i = 0; i < 10; i ++)
         printf("%5d", arr[i]);
}
