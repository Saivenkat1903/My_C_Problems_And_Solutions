/* Reverse a number  Problem 2.2*/
/* Author: Sai Date: 23/2/2022 */

#include <stdio.h>
#include <math.h>

int main()
{
  int number,n1,n2,n3,n4,n5;
  long int revnum;
  printf("\nEnter the number to be reversed:");
  scanf("%d",&number);

  n1=number%10;
  number=number/10;

  n2=number%10;
  number=number/10;

  n3=number%10;
  number=number/10;

  n4=number%10;
  number=number/10;

  n5=number%10;

  revnum=n5+(n4*10)+(n3*100)+(n2*1000)+(n1*10000);

  printf("The reversed number is %ld",revnum);
  return 0;
}
