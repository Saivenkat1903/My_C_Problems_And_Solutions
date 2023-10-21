/* Gets prime factors of given integer Chapter 8 Exercise [C] (b)*/
/* Author: Sai Date: 02/03/2022 */

#include <stdio.h>

void primefactor(int);
int prime(int);

int main()
{
  int n;
  printf("Please enter the integer.\n");
  scanf("%d",&n);
  primefactor(n);
  return 0;
}

void primefactor(int y)
{
  int i;
  for (i=2;i<=y;i++)
  {
    while (prime(i)==1 && y%i==0)
    {
      printf("%d ",i);
      y=y/i;
    }
  }
  printf(".\n");
}

int prime(int x)
{
  int j;
  for (j=2;j<x;j++)
  {
    if (x%j==0)
      return 0;
  }
  return 1;
}
