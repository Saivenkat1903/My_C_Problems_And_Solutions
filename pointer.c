/* Pointers tutorial Chapter 9 Problem 9.1*/
/* Author: Sai Date: 02/03/2022 */

#include <stdio.h>
#include <math.h>

void stat(int ,int ,int ,int ,int ,int *,float *,float *);

int main()
{
  int a,b,c,d,e,sum;
  float mean,sd;
  printf("Enter the 5 integers.\n");
  scanf("%d %d %d %d %d",&a,&b,&c,&d,&e);
  stat(a,b,c,d,e,&sum,&mean,&sd);
  printf("The sum of the integers is %d.\n",sum);
  printf("The average of the integers is %f.\n",mean);
  printf("The standard deviation of the integers is %f.\n",sd);
  return 0;
}

void stat(int a,int b,int c,int d,int e,int *sumad,float *meanad,float *sdad)
{
  *sumad=a+b+c+d+e;
  *meanad=*sumad/5.0;
  *sdad=sqrt( ((a*a)+(b*b)+(c*c)+(d*d)+(e*e))/5-pow(*meanad,2) );
}
