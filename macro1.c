/*  Chapter 12 problem 12.1 */
/* Author: Sai Date: 03/14/2022 */

#include <stdio.h>
#include "areaperi.h"

int main()
{
  float radius=7,side=5,trib=4,trih=3,tril=5;
  printf("The area of the triangle is %f\n.",AREAT(trib,trih));
  printf("The area of the circle is %f\n.",AREAC(radius));
  printf("The area of the square is %f\n.",AREAS(side));
  printf("The perimeter of the triangle is %f\n.",PERIT(trib,trih,tril));
  printf("The perimeter of the circle is %f\n.",PERIC(radius));
  printf("The perimeter of the square is %f\n.",PERIS(side));
  return 0;
}
