/* Menu driven Math functions Chapter 7 Problem 7.1*/
/* Author: Sai Date: 01/03/2022 */

#include <stdio.h>
#include <stdlib.h>

int main()
{
  while(1)
  {
    int i,n,temp=1,j=2;
    printf("Press 1 for to calculate factorial.\nPress 2 to check whether it is a prime or not.\nPress 3 to check whether it is odd or even.\nPress 4 to exit.\n");
    scanf("%d",&i);

    switch (i)
    {
      case 1:
        printf("Enter the Integer.\n");
        scanf("%d",&n);
        for (j=1;j<=n;j++)
        {
          temp=temp*j;
        }
        printf("The factorial is %d.\n",temp);
        break;

      case 2:
        printf("Enter the Integer.\n");
        scanf("%d",&n);

        for (j;j<n;j++)
        {
          if (n%j==0)
            break;
        }
        if (j==n)
          printf("The given number is prime.\n");
        else
          printf("The given number is not a prime.\n");
        break;

      case 3:
        printf("Enter the Integer.\n");
        scanf("%d",&n);

        if (n%2==0)
          printf("The given number is even.\n");
        else
          printf("The given number is odd.\n");

        break;

      case 4:
        exit(1);

      default:
        printf("Please choose a valid number.\n");
    }
  }
  return 0;
}
