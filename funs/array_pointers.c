

void main()
{
 int a[5] = {1,2,3,4,5}, b[10] = {11,12,13,15,566,7,7,7,7,7};

    print(a,5);
    printf("\n");
    print(b,10);
}

void print(int arr[], int len)  // int * arr
{
int i;
   for (i = 0; i < len; i ++)
       printf("%5d", arr[i]);

}
