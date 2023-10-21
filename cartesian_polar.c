/* Convert cartesian coordinates to polar (Exercise [G] (b))*/
/* Author: Sai Date: 23/2/2022 */

#include <stdio.h>
#include <math.h>

int main()
{
  float x,y,r,phi;
  printf("\nEnter the coordinates in cartesian form:");
  scanf("%f %f",&x,&y);
  r=sqrt(pow(x,2)+pow(y,2));
  phi=atan(y/x);
  printf("The coordinates in polar form are (%f,%f) \n",r,phi);
  return 0;
}
