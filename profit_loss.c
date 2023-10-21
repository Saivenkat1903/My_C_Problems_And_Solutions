/* To determine if profit or loss has been made (Problem 3.1)*/
/* Author: Sai Date: 23/2/2022 */

#include <stdio.h>

int main()
{
  float cp,sp,diff;

  printf("Enter the cost price and selling price of article that was sold.\n");
  scanf("%f %f",&cp,&sp);

  diff=sp-cp;

  if(diff>0)
  {
    if(diff==0)
      printf("The person has neither made a profit nor loss.\n");
    printf("The person has made a profit of %f\n",diff);
  }
  else
    printf("The person has made a loss of %f\n",diff*(-1));

  return 0;
}
