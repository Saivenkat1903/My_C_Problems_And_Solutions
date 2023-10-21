/* Multiplication table of given number Chapter 6 Exercise [B] (a)*/
/* Author: Sai Date: 27/2/2022 */

#include <stdio.h>

int main()
{
  int n,i;
  printf("Enter the number.\n");
  scanf("%d",&n);
  for(i=1;i<=12;i++)
  {
    printf("%d*%d=%d.\n",n,i,n*i);
  }
  return 0;
}
