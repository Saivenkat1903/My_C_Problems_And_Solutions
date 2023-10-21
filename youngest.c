/*Youngest person between 3 people (Chapter 3 [F] (b))*/
/* Author: Sai Date: 23/2/2022 */

#include <stdio.h>

int main()
{
  int a1,a2,a3;
  printf("Enter the ages of Ram, Shyam and Ajay.\n");
  scanf("%d %d %d",&a1,&a2,&a3);

  if(a1<a2)
  {
    if(a1<a3)
    {
      printf("The youngest age is %d\n",a1);
    }
    else
    {
      printf("The youngest age is %d\n",a3);
    }
  }
  else
  {
    if(a2<a3)
    {
      printf("The youngest age is %d\n",a2);
    }
    else
    {
      printf("The youngest age is %d\n",a3);
    }
  }
  return 0;
}
