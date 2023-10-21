/* natural log approx first 7 terms Chapter 6 Exercise [B] (d)*/
/* Author: Sai Date: 27/2/2022 */

#include <stdio.h>
#include <math.h>

int main()
{
  int i;
  float sum=0,x;
  printf("Enter the value of x.\n");
  scanf("%f",&x);
  for(i=1;i<=7;i++)
  {
    sum=sum+((1.0/i)*pow((x-1)/x,i));
  }
  printf("%f is the sum of the first 7 terms.\n",sum);
  return 0;
}
