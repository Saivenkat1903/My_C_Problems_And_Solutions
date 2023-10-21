/* Chapter 13 [B] Question (g) */
#include<stdio.h>
#include <math.h>
float area_tri(float, float, float);

int main(){
  float arr_a[6] = {137.4,155.2,149.3,160.0,155.6,149.7};
  float arr_b[6] = {80.9,92.62,97.93,100.25,68.95,120.0};
  float arr_angle[6] = {0.78,0.89,1.35,9.00,1.25,1.75};
  for (int i=0;i<6;i++){
    float area = area_tri(arr_a[i],arr_b[i],arr_angle[i]);
    printf("The area of triangle %d is %f.\n",i,area);
  }
  return 0;
}

float area_tri(float a, float b, float angle){
  float area = 0.5*a*b*sin(0.78);
  return area;
}
