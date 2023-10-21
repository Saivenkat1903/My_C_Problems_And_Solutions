/*Checks triangle by side thing Chapter 4 Problem 4.3*/
/* Author: Sai Date: 26/2/2022 */

#include <stdio.h>

int main()
{
  int s1,s2,s3,s;

  printf("Enter the length of sides of the Triangle.\n");
  scanf("%d %d %d",&s1,&s2,&s3);

  if (s1>=s2 && s1>=s3)
  {
    (s2+s3>s1?(printf("This is a valid triangle.\n")):(printf("This is not a valid triangle.\n")));
  }
  else if (s2>=s1 && s2>=s3)
  {
    (s3+s1>s2?(printf("This is a valid triangle.\n")):(printf("This is not a valid triangle.\n")));
  }
  else if (s3>=s2 && s3>=s1)
  {
    (s2+s1>s3?(printf("This is a valid triangle.\n")):(printf("This is not a valid triangle.\n")));
  }

  return 0;
}
