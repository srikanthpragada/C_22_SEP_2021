#include <stdio.h>

struct circle
{
    int x,y,radius;
};

int area(int r)
{
    return  3.14 * r * r;
}

int equals(struct circle c1, struct circle c2)
{
    return c1.x == c2.x && c1.y == c2.y && c1.radius == c2.radius;
}

struct circle bigger(struct circle c1, struct circle c2)
{
    return c1.radius > c2.radius ? c1 : c2;
}

void print_circle(struct circle c)
{
   printf("%2d, %2d  %2d\n", c.x,c.y, c.radius);
}
void main()
{
  struct circle a[5], big;
  int i;

       srand(time(0));

       for(i=0; i < 5; i++)
       {
          a[i].x = rand() % 50;
          a[i].y = rand() % 50;
          a[i].radius = rand() % 25;
       }

       for(i=0; i < 5; i++)
       {
           printf("%2d,%2d %2d %3d\n", a[i].x, a[i].y, a[i].radius, area(a[i].radius));
       }

       printf("%d\n", equals(a[0],a[1]));

       big = bigger(a[0],a[1]);

       print_circle(big);
}
