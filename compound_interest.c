/* Multiplication table of given number Chapter 6 Exercise [B] (c)*/
/* Author: Sai Date: 27/2/2022 */

#include <stdio.h>
#include <math.h>

int main()
{
  int q,n;
  float r,p;

  for(n=1,q=1,r=10,p=1500;q<=10;n++,q++,r++,p+=100)
  {
    printf("Compound interest is %f.\n",p*pow((1+(r/q)),n*q));
  }
  return 0;
}
