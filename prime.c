/* Prime numbers from 1-300 Chapter 6 Problem 6.1*/
/* Author: Sai Date: 27/2/2022 */

#include <stdio.h>

int main()
{
  int i,j;
  for(i=1;i<300;i++)
  {
    for (j=2;j<i;j++)
    {
      if (i%j==0)
        break;
      if (j==i-1)
        printf("%d\n",i);
    }
  }
  return 0;
}
