// GCD

int gcd(int n1, int n2)
{
 int small,i;

   small = n1 < n2 ? n1 : n2;
   for (i = small; i >=1 ; i --)
   {
         if (n1 % i == 0 && n2 % i == 0)
         {
            return i;
         } // if
   } // for
}

main()
{
  int result;

     result = gcd(15,20);
     printf("%d ", result);
     result = gcd(28,40);
     printf("%d", result);
} // main
