/* Chapter 13 [B] Question (f) */
#include<stdio.h>
#include <math.h>

int main(){
  int data[15]={-6,-12,8,13,11,6,7,2,-6,-9,-10,11,10,9,2};
  float mean,std;
  int sum=0;
  for (int i =0;i<15 ;i++){
    sum = sum + data[i];
  }
  mean = sum/15.0;
  float sum2=0;
  for (int i =0;i<15 ;i++){
    sum2 = sum2 + sqrt((mean - data[i])*(mean - data[i]));
  }
  std = sum2/15.0;
  printf("The mean is %f.\n",mean);
  printf("The standard deviation is %f.\n",std);
  return 0;
}
