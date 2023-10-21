/* Take a to the power of b Chapter 8 Problem 8.2*/
/* Author: Sai Date: 02/03/2022 */

#include <stdio.h>

int ab(int a, int b);

int main()
{
  int a,b;
  printf("Enter the the value of 'a' and 'b'.\n");
  scanf("%d %d",&a,&b);
  printf("'a' raised to the power 'b' is %d.\n",ab(a,b));
  return 0;
}

int ab(int a, int b)
{
  int i,base;
  base=a;
  for (i=1;i<b;i++)
  {
    a=a*base;
  }
  return a;
}
