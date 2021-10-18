// Compare two arrays and return 1 or 0

int compare(int a[5], int b[5])
{
 int i;

   for(i = 0; i < 5; i ++)
   {
      if(a[i] != b[i])
         return 0; // false
   } // for

   return 1; // True
}

main()
{
  int a1[] = {1,2,3,4,5};
  int a2[] = {1,20,3,4,5};

   printf("%d ", compare(a1,a2));

} // main
