/*Determines whether a year is a leap year or not (Problem 3.3)*/
/* Author: Sai Date: 23/2/2022 */

#include <stdio.h>

int main()
{
  int year;
  printf("Enter the year to be checked.\n");
  scanf("%d",&year);

  if(year%100==0)
  {
    if(year%400==0)
    {
      printf("The given year is a leap year.\n");
    }
    else
    printf("The given year is not a leap year.\n");
  }
  else
  {
    if(year%4==0)
      printf("The given year is a leap year.\n");
    else
      printf("The given year is not not a leap year.\n");
  }
  return 0;
}
