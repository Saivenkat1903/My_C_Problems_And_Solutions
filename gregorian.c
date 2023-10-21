/*Finds date on first of jan based on gregorian (Chapter 3 [F] (i))*/
/* Author: Sai Date: 23/2/2022 */

#include <stdio.h>


int main()
{
  int year,start,add2,add1;
  printf("Enter the year.\n");
  scanf("%d",&year);

  start=0;
  add2=((year-1)/4)-((year-1)/100)+((year-1)/400);


  add1=year-1-add2;

  start=(add2*2)+add1;
  start=start%7;

  if(start==0)
    printf("The day on Jan 1rst is a Monday.\n");
  if(start==1)
    printf("The day on Jan 1rst is a Tuesday.\n");
  if(start==2)
    printf("The day on Jan 1rst is a Wednesday.\n");
  if(start==3)
    printf("The day on Jan 1rst is a Thurday.\n");
  if(start==4)
    printf("The day on Jan 1rst is a Friday.\n");
  if(start==5)
    printf("The day on Jan 1rst is a Saturday.\n");
  if(start==6)
    printf("The day on Jan 1rst is a Sunday.\n");

  return 0;
}
