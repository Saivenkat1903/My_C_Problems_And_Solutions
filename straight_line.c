/*Checks whether 3 points fall on one straight line (Chapter 3 [F] (f))*/
/* Author: Sai Date: 23/2/2022 */

#include <stdio.h>

int main()
{
  float x1,y1,x2,y2,x3,y3,thing;
  printf("Enter the coordinates for the first point.\n");
  scanf("%f %f",&x1,&y1);
  printf("Enter the coordinates for the second point.\n");
  scanf("%f %f",&x2,&y2);
  printf("Enter the coordinates for the third point.\n");
  scanf("%f %f",&x3,&y3);

  thing=(x1*(y2-y3))+(x2*(y3-y1))+(x3*(y1-y2));

  if(thing==0)
    printf("The 3 points are on the same line.\n");
  else
    printf("The 3 points are not on the same line.\n");
  
  return 0;
}
