/*Factorial Chapter 5 Problem 5.2*/
/* Author: Sai Date: 27/2/2022 */

#include <stdio.h>

int main()
{
  int n,i=1,ans;

  printf("Enter the integer.\n");
  scanf("%d",&n);

  ans=n;

  while (i<n)
  {
    ans=ans*i;
    i++;
  }
  printf("The factorial of is %d.\n",ans);
  return 0;
}
