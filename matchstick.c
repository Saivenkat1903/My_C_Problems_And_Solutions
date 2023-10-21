/*Matchstick game Chapter 5 Exercise [B] (c)*/
/* Author: Sai Date: 27/2/2022 */

#include <stdio.h>

int main()
{
  int n=21;

  while (n>0)
  {
    int pn,cn;
    printf("There are %d matchsticks. Pick either 1,2,3 or 4 matchsticks from them.\n",n);
    scanf("%d",&pn);
    n=n-pn;
    if (n>0)
    {
      printf("You have choosen %d matchsticks leaving %d matchsticks remaining.\n",pn,n);
      cn=5-pn;
      n=n-cn;
      printf("The computer chooses %d matchsticks leaving %d matchsticks remaining.\n",cn,n);
    }
    else
    {
      printf("You have lost the game by picking the last matchstick.\n");
    }
  }
}
