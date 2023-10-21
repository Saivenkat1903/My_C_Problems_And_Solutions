/* Guess population Chapter 6 Exercise [B] (f)*/
/* Author: Sai Date: 27/2/2022 */

#include <stdio.h>
#include <math.h>

int main()
{
  float x,pop=100000,i=1;

  for(i=1;i<=10;i++)
  {
    x=pop*10/11;
    pop=x;
    printf("The population at the %f th year is %f.\n",11-i,x);
  }
  return 0;
}
