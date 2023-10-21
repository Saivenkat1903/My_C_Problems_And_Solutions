/* Takes a commodity in kg and gives its weight in tonnes,pounds,grams Chapter 9 Exercise [C] (b)*/
/* Author: Sai Date: 02/03/2022 */

#include <stdio.h>

void convert(float ,float *,float *,float *);

int main()
{
  float w,gram,ton,pound;
  printf("Enter weight in Kg.\n");
  scanf("%f",&w);
  convert(w,&gram,&ton,&pound);
  printf("The weight in grams is %f.\n",gram);
  printf("The weight in pounds is %f.\n",pound);
  printf("The weight in tonnes is %f.\n",ton);
  return 0;
}

void convert(float x,float *add_gram,float *add_ton,float *add_pound)
{
  *add_gram=x*1000;
  *add_ton=x/1000;
  *add_pound=x*2.20462;
}
