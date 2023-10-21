/* if statements with salary (Example 3.2)*/
/* Author: Sai Date: 23/2/2022 */

#include <stdio.h>

int main()
{
  float sal,hra,da;

  printf("Enter salary of employee.\n");
  scanf("%f",&sal);

  if(sal<1500)
  {
    hra=sal*0.1;
    da=sal*0.9;
  }
  else
  {
    hra=500.0;
    da=sal*0.98;
  }

  printf("The gross salary of the employee is %f\n",sal+hra+da);
  return 0;
}
