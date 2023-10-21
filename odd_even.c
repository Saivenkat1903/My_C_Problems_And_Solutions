/*Determines whether a given integer is odd or even (Problem 3.2)*/
/* Author: Sai Date: 23/2/2022 */

#include <stdio.h>

int main()
{
  int n;
  printf("Enter the integer to be analysed.\n");
  scanf("%d",&n);

  if(n%2==0)
    printf("The given integer is even.\n");
  else
    printf("The given integer is odd.\n");

  return 0;
}
