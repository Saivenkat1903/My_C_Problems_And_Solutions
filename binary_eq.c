/* Binary equivalent of number Chapter 10 Exercise [B] (a)*/
/* Author: Sai Date: 03/03/2022 */

#include <stdio.h>

int binary(int);

int main()
{
  int n;
  printf("Enter integer.\n");
  scanf("%d",&n);
  binary(n);
  printf("\n");
  return 0;
}

int binary(int x)
{
  if (x==1)
    printf("1");
  else if (x==0)
    printf("1");
  else
  {
    binary(x/2);
    printf("%d",x%2);
  }
}
