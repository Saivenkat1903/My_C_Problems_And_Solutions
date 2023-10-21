/* Fibonacci sequence Chapter 10 Problem 10.3*/
/* Author: Sai Date: 03/03/2022 */

#include <stdio.h>

int fibo(int);

int main()
{
  int n,i;
  printf("Enter the terms of fibonacci sequence to print.\n");
  scanf("%d",&n);
  for (i=1;i<=n;i++)
  {
    printf("%d ",fibo(i));
  }
  printf("\n");
  return 0;
}

int fibo(int x)
{
  if (x==1)
    return 0;
  if (x==2)
    return 1;
  else
  {
    return fibo(x-1)+fibo(x-2);
  }
}
