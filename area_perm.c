/*Checks whether area of rectangle is greater than its perimeter (Chapter 3 [F] (e))*/
/* Author: Sai Date: 23/2/2022 */

#include <stdio.h>

int main()
{
  float l,b,area,perm;
  printf("Enter the length and breadth of the rectangle.\n");
  scanf("%f %f",&l,&b);

  area=l*b;
  perm=2*(l+b);

  if(area>perm)
    printf("The area of the rectangle is more than its perimeter.\n");
  if(area<perm)
    printf("The area of the rectangle is less than its perimeter.\n");
  if(area==perm)
    printf("The area of the rectangle is equal to its perimeter.\n");
  return 0;
}
