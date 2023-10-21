/*Checks where a point is with respect to a circle (Chapter 3 [F] (g))*/
/* Author: Sai Date: 23/2/2022 */

#include <stdio.h>
#include <math.h>

int main()
{
  float x,y,r,h,k,d;
  printf("Enter the coordinates of the center of a circle.\n");
  scanf("%f %f",&h,&k);
  printf("Enter the radius of the circle.\n");
  scanf("%f",&r);
  printf("Enter the coordinates of the point to check.\n");
  scanf("%f %f",&x,&y);

  d=sqrt(pow(x-h,2)+pow(y-k,2));

  if(d==r)
    printf("The given point is on the circle.\n");
  if(d>r)
    printf("The given point in the exterior of the circle.\n");
  if(d<r)
    printf("The given point in the interior of the circle.\n");
  return 0;
}
