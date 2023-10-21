/* loads of stuff to do Chapter 9 Exercise [C] (c)*/
/* Author: Sai Date: 02/03/2022 */

#include <stdio.h>
#include <math.h>


float dist(int,int,int,int);
float area(int,int,int,int,int,int);
int check(int,int);

int main()
{
  int a,b;
  printf("Name the point to check.\n");
  scanf("%d %d",&a,&b);
  check(a,b);
  return 0;
}

float dist(int p,int q,int r,int s)
{
  float distance;
  distance=sqrt(pow(p-r,2)+pow(q-s,2));
  return distance;
}

float area(int x1,int y1,int x2,int y2,int x3,int y3)
{
  float d1,d2,d3,semi,area;
  d1=dist(x1,y1,x2,y2);
  d2=dist(x1,y1,x3,y3);
  d3=dist(x3,y3,x2,y2);
  semi=(d1+d2+d3)/2;
  area=sqrt(semi*(semi-d1)*(semi-d2)*(semi-d3));
  return area;
}

int check(int l,int m)
{
  float a1,a2,a3,a4;
  a1=area(0,0,10,30,20,0);
  a2=area(0,0,l,m,20,0);
  a3=area(0,0,10,30,l,m);
  a4=area(20,0,10,30,l,m);
  printf("%f.\n",a1);
  printf("%f.\n",a2);
  printf("%f.\n",a3);
  printf("%f.\n",a4);
  if (a1==a2+a3+a4)
    printf("1\n");
  else
    printf("0\n");
}
