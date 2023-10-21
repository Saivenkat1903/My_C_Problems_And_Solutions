/* Series calculator first 7 terms Chapter 6 Problem 6.2*/
/* Author: Sai Date: 27/2/2022 */

#include <stdio.h>

int main()
{
  int i;
  float prod=1,sum=0;
  for(i=1;i<=7;i++)
  {
    prod=prod*i;
    sum=sum+(i/prod);
  }
  printf("%f is the sum of the first 7 terms.\n",sum);
  return 0;
}
