// Nested loop

#include <stdio.h>

void main()
{
    int i,j;

      for(i = 1; i <= 5; i++)
      {
          for(j = 1; j <= 5; j++)
          {
             printf("%d %d\n", i,j);
          } // j loop
     } // i loop

} // main()
