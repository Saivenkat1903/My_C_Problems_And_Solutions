/* Currency problem Problem 2.3*/
/* Author: Sai Date: 23/2/2022 */

#include <stdio.h>

int main()
{
  int number,n1,n2,n5,n10,n50,n100;
  printf("\nEnter the number to find smallest no. of notes:");
  scanf("%d",&number);

  n100=number/100;
  number=number-(n100*100);

  n50=number/50;
  number=number-(n50*50);

  n10=number/10;
  number=number-(n10*10);

  n5=number/5;
  number=number-(n5*5);

  n2=number%2;
  number=number-(n2*2);

  n1=number;

  printf("The smallest combination required is \n %d 100 ruppee notes.\n %d 50 ruppee notes. \n %d 10 ruppee notes. \n %d 5 ruppee notes. \n %d 2 ruppee notes. \n %d 1 ruppee notes. \n",n100,n50,n10,n5,n2,n1);
  return 0;
}
