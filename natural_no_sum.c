/* sum of first n natural numbers Chapter 10 Exercise [B] (b)*/
/* Author: Sai Date: 03/03/2022 */

#include <stdio.h>

int sum(int);

int main()
{
  int n;
  printf("Enter number.\n");
  scanf("%d",&n);
  printf("%d\n.",sum(n));
  return 0;
}

int sum(int x)
{
  if (x==1)
  {
    return 1;
  }
  else
  {
    return x+sum(x-1);
  }
}
