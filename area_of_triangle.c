/* Calculation of Area of triangle  Problem 2.1*/
/* Author: Sai Date: 23/2/2022 */

#include <stdio.h>
#include <math.h>

int main()
{
  float s1,s2,s3,semi,thing,answer;
  printf("Enter the sides of the Triangle.\n");
  scanf("%f %f %f",&s1,&s2,&s3);
  semi=(s1+s2+s3)/2.0;
  thing=semi*(semi-s1)*(semi-s2)*(semi-s3);
  answer=sqrtf(thing);
  printf("The area of the given triangle is %f\n",answer);
  return 0;
}
