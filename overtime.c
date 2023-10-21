/*Overtime pay Chapter 5 Problem 5.1*/
/* Author: Sai Date: 27/2/2022 */

#include <stdio.h>

int main()
{
  int i=1,hours;
  float pay;

  while (i<=10)
  {
    printf("Enter the amount of hours worked.\n");
    scanf("%d",&hours);

    if(hours>40)
    {
      pay=120.0*(hours-40);
      printf("The pay for overtime is %f.\n",pay);
    }
    else
    {
      printf("There is no overtime pay as they haven't worked above 40 hours.\n");
    }
    i++;
  }
  return 0;
}
