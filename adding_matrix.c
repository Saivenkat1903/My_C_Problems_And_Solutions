/*Chapter 14 Exercises Page 253 (f)*/
#include<stdio.h>

int main(){
  int mat1[6][6] = {{1,2,3,4,5,6},
              {5,3,5,7,2,7},
              {2,2,3,3,3,3},
              {1,1,1,1,1,1},
              {5,3,6,8,2,1},
              {1,3,6,8,9,9}
              };
  int mat2[6][6] = {{1,2,3,4,5,6},
            {5,3,3,7,2,7},
            {2,2,3,3,3,7},
            {1,1,1,2,1,1},
            {5,1,6,8,2,1},
            {1,3,6,8,9,91}
            };
  int add_mat[6][6];
  for(int i = 0 ;i<6;i++){
    for(int j = 0;j<6;j++){
      add_mat[i][j] = mat1[i][j] + mat2[i][j];
    }
  }
  for(int i = 0 ;i<6;i++){
    for(int j = 0;j<6;j++){
      printf("%d ",add_mat[i][j]);
    }
    printf("\n");
  }
  return 0;
}
