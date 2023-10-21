/* Recursive function for sum of digits Chapter 10 Problem 10.1*/
/* Author: Sai Date: 03/03/2022 */

#include <stdio.h>

int sum(int);

int main()
{
  int n,thing;
  printf("Enter the integer.\n");
  scanf("%d",&n);
  thing=sum(n);
  printf("Sum of digits is %d.\n",thing);
  return 0;
}

int sum(int x)
{
  if (x/10==0)
  {
    return x;
  }
  else
  {
    return (x%10)+sum(x/10);
  }
}
