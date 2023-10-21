/* Range Chapter 5 Exercise [B] (f)*/
/* Author: Sai Date: 27/2/2022 */

#include <stdio.h>

#include <stdio.h>

int main()
{
  int large=0,small=0;
  char b='T';

  while (b=='T')
  {
    int temp;
    printf("Please enter number.\n");
    scanf("%d",&temp);

    if (temp>=large)
    {
      large=temp;
    }
    if (temp<=small)
    {
      small=temp;
    }
    printf("Type in 'T' continue or 'F' to stop.\n");
    scanf(" %c",&b);
  }
  printf("The range of the given set of numbers is %d.\n",large-small);
  return 0;
}
