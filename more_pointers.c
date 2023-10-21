/* Pointers tutorial 2 Chapter 9 Problem 9.2*/
/* Author: Sai Date: 02/03/2022 */

#include <stdio.h>
#include <math.h>

void arith(int , int , int , int *,int *);

int main()
{
  int a,b,n,power,fact;
  printf("Enter the 2 numbers to power to the other.\n");
  scanf("%d %d",&a,&b);
  printf("Enter the number to factorial.\n");
  scanf("%d",&n);
  arith(a,b,n,&power,&fact);
  printf("The power of %d to %d is %d.\n",a,b,power);
  printf("The factorial of %d is %d.\n",n,fact);
  return 0;
}

void arith(int x, int y, int z, int *add_power, int *add_fact)
{
  int i;
  *add_power=pow(x,y);
  *add_fact=z;
  for (i=z-1;i>0;i--)
  {
    *add_fact=(*add_fact)*i;
  }
}
