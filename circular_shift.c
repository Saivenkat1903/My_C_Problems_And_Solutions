/* Circularly shifts the values of the variable to the right Chapter 9 Exercise [C] (a)*/
/* Author: Sai Date: 02/03/2022 */

#include <stdio.h>

void shift(int ,int ,int ,int *, int *, int *);
int main()
{
  int x,y,z;
  printf("Enter the values of 'x','y' and 'z'.\n");
  scanf("%d %d %d",&x,&y,&z);
  shift(x,y,z,&x,&y,&z);
  printf("The value of 'x' is now %d.\n",x);
  printf("The value of 'y' is now %d.\n",y);
  printf("The value of 'z' is now %d.\n",z);
  return 0;
}

void shift(int a,int b,int c,int *add_x, int *add_y, int *add_z)
{
  *add_x=c;
  *add_y=a;
  *add_z=b;
}
