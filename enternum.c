/*Matchstick game Chapter 5 Exercise [B] (d)*/
/* Author: Sai Date: 27/2/2022 */

#include <stdio.h>

int main()
{
  int p=0,n=0,z=0;
  char b='T';

  while (b=='T')
  {
    int temp;
    printf("Please enter number.\n");
    scanf("%d",&temp);

    if (temp>0)
    {
      p++;
    }
    else if (temp<0)
    {
      n++;
    }
    else
    {
      z++;
    }
    printf("Type in 'T' continue or 'F' to stop.\n");
    scanf(" %c",&b);
  }
  printf("The total amount of positive number are %d,\nThe total number of negative numbers are %d,\nand the total number of zeros are %d.\n",p,n,z);
  return 0;
}
