/* Takes 2 values for 2 variables and interchanges them (Exercise [G] (f)*/
/* Author: Sai Date: 23/2/2022 */

#include <stdio.h>

int main()
{
  int c,d,temp;

  printf("Enter the 2 values \n");
  scanf("%d %d",&c,&d);

  temp=c;
  c=d;
  d=temp;l;

  printf("The value of c is %d.\n",c);
  printf("The value of d is %d.\n",d);
  return 0;
}
