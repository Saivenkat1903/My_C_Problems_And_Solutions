/*FInds the kind of Triangle  given Chapter 4 Exercise [D] (b)*/
/* Author: Sai Date: 26/2/2022 */

#include <stdio.h>

int main()
{
  float r,g,b,c,m,k,y,white;

  printf("Enter RGB values.\n");
  scanf("%f %f %f",&r,&g,&b);

  if (r==0 && b==0 && g==0)
  {
    c=0;
    m=0;
    y=0;
    k=1;
  }
  else
  {
    if (r>=g && r>=b)
      white=r/255;
    else if (g>=r && g >= b)
      white=g/255;
    else
      white=b/255;

    c=(white-(r/255))/white;
    m=(white-(g/255))/white;
    y=(white-(b/255))/white;
    k=1-white;
  }

  printf("The CMYK format is %f %f %f %f \n",c,m,y,k);
  return 0;

}
