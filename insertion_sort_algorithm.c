/* Chapter 13 [B] Question (d) */
#include<stdio.h>
void element_swap(int[], int , int);

int main(){
  int arr[5] = {69,42,20,9,13};

  for (int i=1; i <5 ;i++){
    for (int j=0;j<i;j++){
      if ( arr[j] > arr[i]){
        element_swap(arr,j,i);
        while (i !=j+1){
          element_swap(arr,i,i-1);
          i=i-1;
        }
        break;
      }
    }
  }

  for (int k=0;k<5;k++){
    printf("%d ",arr[k]);
  }
  return 0;
}

void element_swap(int ptr[], int a , int b){
  int temp=ptr[a];
  ptr[a] = ptr[b];
  ptr[b] = temp;
}
