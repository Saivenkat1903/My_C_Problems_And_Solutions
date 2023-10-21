/* Recursive function for finding prime factors Chapter 10 Problem 10.2*/
/* Author: Sai Date: 03/03/2022 */

#include <stdio.h>

int prime(int);

int main()
{
  int n,thing;
  printf("Enter the integer.\n");
  scanf("%d",&n);
  prime(n);
  return 0;
}

int prime(int x)
{
  int i;
  if (x==1)
  {
    printf("1\n");
  }
  else
  {
    for (i=2;i<=x;i++)
    {
      if (x%i==0)
      {
        printf("%d ",i);
        break;
      }
    }
    prime(x/i);
  }
}
