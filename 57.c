#include <stdio.h>
 
void main()
{
   int x, y, t;
 
  
   scanf("%d%d", &x, &y);
 
   printf("\nx = %d\ny = %d\n",x,y);
 
   t = x;
   x    = y;
   y    = t;
 
   printf("\nx = %d\ny = %d\n",x,y);
 
   
}
