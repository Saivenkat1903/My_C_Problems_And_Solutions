/*Steel stuff Chapter 4 Exercise [D] (c)*/
/* Author: Sai Date: 26/2/2022 */

#include <stdio.h>

int main()
{
  float hard,cc,ts;

  printf("Enter hardness,carbon content and tensile strength of steel.\n");
  scanf("%f %f %f",&hard,&cc,&ts);

  if (hard>50 && cc<0.7 && ts>5600)
    printf("Grade 10.\n");
  else if (hard>50 && cc<0.7 && ts<5600)
    printf("Grade 9.\n");
  else if (hard<50 && cc<0.7 && ts>5600)
    printf("Grade 8.\n");
  else if (hard>50 && cc>0.7 && ts>5600)
    printf("Grade 7.\n");
  else if ((hard>50 && cc>0.7 && ts<5600) || (hard<50 && cc<0.7 && ts>5600) || (hard>50 && cc<0.7 && ts>5600))
    printf("Grade 6.\n");
  else if (hard<50 && cc>0.7 && ts<5600)
    printf("Grade 5.\n");

  return 0;
}
