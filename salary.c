/* Calculation of Gross salary (Problem 1,1) */
/* Author: Sai Date: 24/2/2022 */

#include <stdio.h>

int main()
{
  float basic_sal,house_amount,dear_amount;
  /* Gets input and assigns it the variables */
  printf("Enter your salary.\n");
  scanf("%f",&basic_sal);
  house_amount=basic_sal*0.2;
  dear_amount=basic_sal*0.4;
  printf("The house salary of Ramesh is %f\n",house_amount);
  printf("The dear salary of Ramesh is %f\n",dear_amount);
  printf("The gross salary of Ramesh is %f\n",basic_sal+house_amount+dear_amount);
  return 0;
}
