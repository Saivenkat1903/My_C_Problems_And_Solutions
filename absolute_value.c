/*Absolute Value function (Chapter 3 [F] (d))*/
/* Author: Sai Date: 23/2/2022 */

#include <stdio.h>

int main()
{
  float a;
  printf("Enter the number.\n");
  scanf("%f",&a);

  if(a>=0)
  {
    printf("The absolute value of the number is %f\n",a);
  }
  else
  {
    printf("The absolute value of the number is %f\n",(-1)*a);
  }
  return 0;
}
