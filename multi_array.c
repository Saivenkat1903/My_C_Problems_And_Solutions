/*Chapter 14 Multidimensional Arrays*/
#include <stdio.h>

int main(){
  int arr[3][2];
  printf("Enter roll number and marks.\n");
  for (int i=0; i<3 ;i++){
    scanf("%d %d",&arr[i][0],&arr[i][1]);
  }
  for(int j=0;j<3;j++){
    printf("%d %d\n",arr[j][0],arr[j][1]);
  }
  return 0;
}
