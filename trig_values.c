/* Gives all trig values for an angle (Exercise [G] (e))*/
/* Author: Sai Date: 23/2/2022 */

#include <stdio.h>
#include <math.h>

int main()
{
  float angle;

  printf("Enter the angle desired \n");
  scanf("%f",&angle);

  printf("The sine value is %f.\n",sin(angle));
  printf("The cosine value is %f.\n",cos(angle));
  printf("The tangent value is %f.\n",tan(angle));
  printf("The secant value is %f.\n",1/cos(angle));
  printf("The cosecant value is %f.\n",1/sin(angle));
  printf("The cotangent value is %f.\n",1/tan(angle));
  return 0;
}
