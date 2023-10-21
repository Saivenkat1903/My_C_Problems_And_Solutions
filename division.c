/*else if block that is Chapter 4 example 4.1*/
/* Author: Sai Date: 23/2/2022 */

#include <stdio.h>

int main()
{
  int m1,m2,m3,m4,m5;
  float mark;
  printf("Please enter the marks achieved.\n");
  scanf("%d %d %d %d %d",&m1,&m2,&m3,&m4,&m5);
  mark=(m1+m2+m3+m4+m5)/5.0;
  if(mark>=60)
    printf("%f belongs to the first division.\n",mark);
  else if(mark>=50 && mark <=59)
    printf("%f belongs to the second division.\n",mark);
  else if(mark>=40 && mark <=49)
    printf("%f belongs to the third division.\n",mark);
  else
    printf("%f is a fail mark.\n",mark);
  return 0;
}
