/*FInds the kind of Triangle  given Chapter 4 Exercise [D] (a)*/
/* Author: Sai Date: 26/2/2022 */

#include <stdio.h>
#include <math.h>

int main()
{
  int s1,s2,s3;

  printf("Enter the length of sides of the Triangle.\n");
  scanf("%d %d %d",&s1,&s2,&s3);

  if (s1==s2 && s1==s3)
    printf("The given triangle is an equilateral triangle.\n");
  else if (s2==s3 || s1==s3 || s1==s2)
    printf("The given triangle is an isoceles triangle.\n");
  else if (s1>s2 && s1>s3)
  {
    if (pow(s2,2)+pow(s3,2)==pow(s1,2))
      printf("The given triangle is a right angled triangle.\n");
    else
      printf("The given triangle is a scalene triangle.\n");
  }
  else if (s2>=s1 && s2>=s3)
  {
    if (pow(s1,2)+pow(s3,2)==pow(s2,2))
      printf("The given triangle is a right angled triangle.\n");
    else
      printf("The given triangle is a scalene triangle.\n");
  }
  else if (s3>=s1 && s3>=s2)
  {
    if (pow(s1,2)+pow(s2,2)==pow(s3,2))
      printf("The given triangle is a right angled triangle.\n");
    else
      printf("The given triangle is a scalene triangle.\n");
  }
  return 0;
}
