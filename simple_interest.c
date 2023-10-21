/* Calculation of Simple Interest */
/* Author: Sai Date: 23/2/2022 */

#include <stdio.h>

int main()
{
  int p,n;
  float r,si;
  /* Gets input and assigns it the variables */
  printf("Enter the desired values for principal, years, and interest rate.\n");
  scanf("%d %d %f",&p,&n,&r);
  /* Formula for simple interest */
  si=p*n*r/100;
  printf("%f\n",si );
  return 0;
}
