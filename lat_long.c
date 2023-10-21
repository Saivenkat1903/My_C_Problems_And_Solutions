/* Distance between 2 points given latitude and longitude (Exercise [G] (c))*/
/* Author: Sai Date: 23/2/2022 */

#include <stdio.h>
#include <math.h>

int main()
{
  float l1,l2,g1,g2,d;
  printf("Enter the latitude and longitude of the first point \n");
  scanf("%f %f",&l1,&l2);
  printf("Enter the latitude and longitude of the second point \n");
  scanf("%f %f",&g1,&g2);
  d=3963*(acos(sin(l1)*sin(l2)+(cos(l1)*cos(l2)*cos(g2-g1))));
  printf("The distance between the 2 points is %f.\n",d);
  return 0;
}
