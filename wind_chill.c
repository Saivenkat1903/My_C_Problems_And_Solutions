/* Wind chill factor (Exercise [G] (d))*/
/* Author: Sai Date: 23/2/2022 */

#include <stdio.h>
#include <math.h>

int main()
{
  float t,v,wcf;

  printf("Enter the Temperature and Win Velocity \n");
  scanf("%f %f",&t,&v);

  wcf=35.74+(0.6215*t)+(((0.4275*t)-35.75)*pow(v,0.16));

  printf("The wind chill factor is %f.\n",wcf);
  return 0;
}
