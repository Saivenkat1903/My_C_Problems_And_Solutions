/* Chapter 13 [B] Question (e) */
#include<stdio.h>
void modify(int*);

int main(){
  int arr[10] = {1,2,3,4,5,6,7,8,9,10};
  int* ptr = arr;
  modify(ptr);
  for (int i =0;i<10 ;i++){
    printf("%d ",*ptr);
    ptr++;
  }
  return 0;
}

void modify(int* arr_ptr){
  for (int i = 0;i<10;i++){
    *arr_ptr = *arr_ptr *3;
    arr_ptr++;
  }
}
