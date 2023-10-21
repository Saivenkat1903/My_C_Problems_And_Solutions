
/* Calculation of A4 sheet dimensions till A8 (Exercise [F] (c) ) */
/* Author: Sai Date: 24/2/2022 */

#include <stdio.h>

int main()
{
  float a0b,a0l,a1l,a1b,a2l,a2b,a3l,a3b,a4l,a4b,a5l,a5b,a6l,a6b,a7l,a7b,a8l,a8b;
  a0l=1189;
  a0b=841;

  a1b=a0l/2;
  a1l=a0b;

  a2b=a1l/2;
  a2l=a1b;

  a3b=a2l/2;
  a3l=a2b;

  a4b=a3l/2;
  a4l=a3b;

  a5b=a4l/2;
  a5l=a4b;

  a6b=a5l/2;
  a6l=a5b;

  a7b=a6l/2;
  a7l=a6b;

  a8b=a7l/2;
  a8l=a7b;

  printf("The dimensions for A1 are %f and %f\n",a1b,a1l);
  printf("The dimensions for A2 are %f and %f\n",a2b,a2l);
  printf("The dimensions for A3 are %f and %f\n",a3b,a3l);
  printf("The dimensions for A4 are %f and %f\n",a4b,a4l);
  printf("The dimensions for A5 are %f and %f\n",a5b,a5l);
  printf("The dimensions for A6 are %f and %f\n",a6b,a6l);
  printf("The dimensions for A7 are %f and %f\n",a7b,a7l);
  printf("The dimensions for A8 are %f and %f\n",a8b,a8l);

  return 0;
}
