/*Checks if triangle is valid (Chapter 3 [F] (c))*/
/* Author: Sai Date: 23/2/2022 */

#include <stdio.h>

int main()
{
  float a1,a2,a3,sum;
  printf("Enter the angles of triangle.\n");
  scanf("%f %f %f",&a1,&a2,&a3);

  sum=a1+a2+a3;

  if(sum==180)
  {
    printf("The given triangle is valid\n");
  }
  else
  {
    printf("The given triangle is not valid\n");
  }
  return 0;
}
