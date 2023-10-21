/*Chapter 14 Multidimensional Arrays We will see how pointers can be
  used to go through the array*/
#include<stdio.h>

int main(){
  int arr[4][2]={
                  {1234,56},{1212,33},{1434,80},{1312,78}
                };
  int (*p)[2];
  int *ptr;
  for (int i=0;i<4;i++){
    p = &arr[i];
    ptr = (int *)p;
    for (int j=0;j<2;j++){
      printf("%d ",*(ptr+j) );
    }
    printf("\n");
  }
  return 0;
}
