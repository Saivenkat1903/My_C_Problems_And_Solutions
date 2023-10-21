/* Pythgorean triplets with sides length less than 30 Chapter 6 Exercise [B] (e)*/
/* Author: Sai Date: 27/2/2022 */

#include <stdio.h>
#include <math.h>

int main()
{
  float s1,s2;

  for(s1=1;s1<=30;s1++)
  {
    for(s2=1;s2<=30;s2++)
    {
      if ((pow(s1,2)+pow(s2,2))<=900)
      {
        printf("%f %f %f\n",s1,s2,sqrt(pow(s1,2)+pow(s2,2)));
      }
    }
  }
  return 0;
}
