/* Calculate discounted price (Example 3.1)*/
/* Author: Sai Date: 23/2/2022 */

#include <stdio.h>

int main()
{
  int quan;
  float ppi,total;

  printf("Enter the quantity bought and the price of the quantity bought.\n");
  scanf("%d %f",&quan,&ppi);

  total=quan*ppi;

  if(quan>1000)
    total=total*0.9;
  else
    total=total;

  printf("The cost is %f\n",total);
  return 0;
}
