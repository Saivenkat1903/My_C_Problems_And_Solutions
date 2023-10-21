/*Chapter 14 Problem 14.2 page 248*/
#include<stdio.h>

int main(){
  int matrix[3][5] = {
                {1,2,3,4,5},
                {6,7,8,9,10},
                {11,12,13,14,15}
              };
  int Tmatrix[5][3];
  for (int i = 0; i<3 ;i++){
    int (*p)[5] = &matrix[i];
    int* ptr = (int*)p;

    for (int j = 0;j<5;j++){
      Tmatrix[j][i] = *ptr;
      ptr++;
    }
  }
  for(int i = 0 ;i<5;i++){
    for (int j = 0;j<3;j++){
      printf("%d ",Tmatrix[i][j]);
    }
    printf("\n");
  }
  return 0;
}
