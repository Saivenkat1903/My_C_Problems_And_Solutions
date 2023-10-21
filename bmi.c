/*body mass index Chapter 4 Exercise [D] (d)*/
/* Author: Sai Date: 26/2/2022 */

#include <stdio.h>
#include <math.h>

int main()
{
  float w,h,bmi;

  printf("Enter weight and height.\n");
  scanf("%f %f",&w,&h);

  bmi=w/pow(h,2);

  if (bmi<15)
    printf("Starvation.\n");
  else if (bmi>=15.1 && bmi<=17.5)
    printf("Anorexic");
  else if (bmi>=17.6 && bmi<=18.5)
    printf("Underweight.\n");
  else if (bmi>=18.6 && bmi<=24.9)
    printf("Ideal.\n");
  else if (bmi>=25 && bmi<=25.9)
    printf("Overweight.\n");
  else if (bmi>=30 && bmi<=30.9)
    printf("Obese.\n");
  else if (bmi>=40)
    printf("Morbidly obese.\n");
  return 0;
}
