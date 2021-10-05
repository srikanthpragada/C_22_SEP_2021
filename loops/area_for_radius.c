// print area for circles with radius 10 to 20
#include <stdio.h>

void main()
{
    int r;


      for(r = 10; r <= 20; r ++)
      {
         printf("%2d  %.2f\n", r, 3.14 * r * r);
      }

} // main()
