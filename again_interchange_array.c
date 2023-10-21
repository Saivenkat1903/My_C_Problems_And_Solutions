/*Interchange elements of a 10 element array such that the even and odd places are swapped*/
#include<stdio.h>

void swap_element(int*);

int main(){
  int arr[10] = {1,2,1,2,1,2,1,2,1,2},i;
  int* ptr = arr;
  swap_element(ptr);
  for(i=0;i<=9;i++){
    printf("%d\n",arr[i]);
  }
  return 0;
}

void swap_element(int* p){
  int i;
  for (i=0; i<=9;i=i+2){
    int temp = *p;
    *p = *(p+1);
    *(p+1) = temp;
    p=p+2;
  }
}
