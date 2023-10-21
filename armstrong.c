/*Armstrong number Calculator Chapter 5 Exercise [B] (b)*/
/* Author: Sai Date: 27/2/2022 */

#include <stdio.h>
#include <math.h>

int main()
{
  int i=1,d1,d2,d3,check;
  while (i++<500)
  {
    d1=i%10;
    d2=(i/10)%10;
    d3=(i/100)%10;

    check=pow(d1,3)+pow(d2,3)+pow(d3,3);
    if (check==i)
      printf("%d is an Armstrong number.\n",i);
  }
  return 0;
}
