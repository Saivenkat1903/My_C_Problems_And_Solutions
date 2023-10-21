/* Chapter 13 [B] Question (a) */
#include<stdio.h>

int main(){
  int arr[25],i;
  int even_no = 0, odd_no = 0, positive_no = 0, negative_no = 0;

  /*Getting the required inputs */
  for (i=0; i<25; i++){
    printf("Enter the number you want to enter.\n");
    scanf("%d",&arr[i]);

    if (arr[i]%2==0){
      even_no = even_no+1;
    }
    else {
      odd_no = odd_no+1;
    }

    if (arr[i]>=0) {
      positive_no = positive_no + 1;
    }
    else {
      negative_no = negative_no + 1;
    }
  }

  printf("The amount of even numbers are %d\n",even_no);
  printf("The amount of odd numbers are %d\n",odd_no);
  printf("The amount of positive numbers are %d\n",positive_no);
  printf("The amount of negative numbers are %d\n",negative_no);
  return 0;
}
