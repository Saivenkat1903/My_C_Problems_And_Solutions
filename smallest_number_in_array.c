/* Chapter 13 [B] Question (c) */
#include<stdio.h>

int main(){
  int n;
  printf("Enter amount of numbers to add to array.\n");
  scanf("%d",&n);
  int arr[n];

  /* Obtaining numbers*/
  int start=0;
  printf("Enter the numbers.\n");
  while (1){
    scanf("%d",&arr[start]);
    if(start == n-1){
      break;
    }
    start++;
  }

  int* ptr = arr;
  int smallest = *ptr;
  ptr++;
  for(int i=1;i<n;i++){
    if (smallest > *ptr){
      smallest = *ptr;
    }
    ptr++;
  }
  printf("The smallest number in the given list of numbers is %d.\n",smallest);
  return 0;
}
