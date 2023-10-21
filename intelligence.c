/* Multiplication table of given number Chapter 6 Exercise [B] (b)*/
/* Author: Sai Date: 27/2/2022 */

#include <stdio.h>

int main()
{
  int y;
  float x,i;

  for(y=1;y<=6;y++)
  {
    for (x=5.5;x<=12.5;x=x+0.5)
    {
      i=2+(y+(0.5*x));
      printf("y=%d x=%f i=%f\n",y,x,i);
    }
  }
  return 0;
}
