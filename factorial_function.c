/* Calculating factorial using function Chapter 8 Problem 8.1*/
/* Author: Sai Date: 02/03/2022 */

#include <stdio.h>

int fact(int);

int main()
{
  int n;
  printf("Please enter an integer.\n");
  scanf("%d",&n);
  printf("The factorial of the integer is %d.\n",fact(n));
  return 0;
}

int fact(int x)
{
  int i;
  for (i=x-1;i>0;i--)
  {
    x=x*i;
  }
  return x;
}
