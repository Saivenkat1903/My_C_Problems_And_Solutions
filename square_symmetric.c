/*Chapter 14 Exercises Page 253 (e)*/
#include<stdio.h>

int main(){
  int result = 1;
  int matrix[5][5] = {
                      {1,3,6,7,5},
                      {3,4,4,9,0},
                      {6,4,5,9,9},
                      {7,9,9,1,1},
                      {4,0,9,1,8}
                      };
  for (int i = 0;i<5;i++){
    for (int j = 0;j<5;j++){
      if (matrix[i][j] != matrix[j][i]){
        printf("The matrix is not symmetric.\n");
        result = 0;
        break;
      }
    }
    if(result==0){
      break;
    }
  }
  if (result){
    printf("The matrix is symmetric.\n");
  }

  for (int i = 0;i<5;i++){
    for (int j = 0;j<5;j++){
      printf("%d ",matrix[i][j]);
      }
    printf("\n");
    }
  return 0;
}
