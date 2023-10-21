/*We shall see how to return an array in C*/
#include <stdio.h>

int* make_arr(int*);
int main(){
  int max,i,*arr;
  arr = make_arr(&max);
  printf("Size of array is %d\n",max);
  for(i=0;i<=max-1;i++){
    printf("%d\n",arr[i]);
  }
  return 0;
}

int* make_arr(int* a){
  static int thing[5]={1,11,3,4,5};
  *a = sizeof(thing)/sizeof(thing[0]);
  return thing;
}
