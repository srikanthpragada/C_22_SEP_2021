#include <stdio.h>


enum paymentmode {
    OFFLINE = 1, ONLINE = 2
};

struct payment {
    int invno;
    int amount;
    enum paymentmode mode;
};


enum weekday {SUN=1, MON=2, TUE=3, WED=4, THU=5, FRI=6, SAT=7};

void main()
{
  enum paymentmode pm;
  enum weekday holiday;

  struct payment p1 = {1, 10000, ONLINE};

     holiday = SUN;

     pm = OFFLINE;

     printf("%d", pm);

     if(pm == ONLINE)
     ;

}
