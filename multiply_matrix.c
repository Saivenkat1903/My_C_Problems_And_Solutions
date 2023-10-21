/*Chapter 14 Exercises Page 253 (g)*/
#include<stdio.h>

int main(){
  int mat1[3][3] = {{1,2,3},
                    {5,3,5},
                    {2,2,3},
                    };
  int mat2[3][3] = {{1,0,0},
                    {0,1,0},
                    {0,0,1},
                    };
  int mult_mat[3][3];
  for(int i = 0 ;i<3;i++){
    for(int j = 0;j<3;j++){
      mult_mat[i][j] = mat1[i][0]*mat2[0][j] + mat1[i][1]*mat2[1][j] + mat1[i][2]*mat2[2][j] ;
    }
  }
  for(int i = 0 ;i<3;i++){
    for(int j = 0;j<3;j++){
      printf("%d ",mult_mat[i][j]);
    }
    printf("\n");
  }
  return 0;
}
