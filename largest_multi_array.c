/*Chapter 14 Problem 14.1 page 248*/
#include<stdio.h>

int largest_element_in_array(int*);

int main(){
  int large;
  int arr[5][5]={
                  {11,1,7,9,7},
                  {13,54,56,2,5},
                  {23,43,90,22,13},
                  {14,15,17,16,19},
                  {45,3,6,8,10}
                };
  int (*p)[5];
  for (int i = 0; i<5 ;i++){
    p=&arr[i];
    int* ptr = (int *)p;
    int temp = largest_element_in_array(ptr);
    if(i==0){
      large = temp;
    } else if (large < temp){
      large = temp;
    }
  }
  printf("The largest element is %d.\n",large);
  return 0;
}

int largest_element_in_array(int* ptr){
  int largest = *(ptr);
  for (int i=0;i<5;i++){
    if (largest < *(ptr)){
      largest = *ptr;
    }
    ptr++;
  }
  return largest;
}
