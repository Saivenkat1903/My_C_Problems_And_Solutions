/* Chapter 13 [B] Question (b) */
#include<stdio.h>

void array_checker(int*,int);

int main(){
  int arr1[7]={1,2,3,6,3,2,1};
  int arr2[7]={1,4,7,2,5,7,1};
  int y = 7;
  array_checker(arr1,y);
  array_checker(arr2,y);
  return 0;
}

void array_checker(int* ptr , int y){
  int ans = 1;
  for (int i = 0;i<(y+1)/2;i++){
    if ( *ptr != *(ptr+(y-1-(2*i))) ){
      ans = 0;
      break;
    }
    ptr++;
  }

  if (ans==0){
    printf("The given array is not symmetric.\n");
  } else if (ans==1){
    printf("The given array is symmetric.\n");
  }
}
