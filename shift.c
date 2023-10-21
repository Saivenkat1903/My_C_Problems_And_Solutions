/*Chapter 14 Exercise 253 (h) */
#include<stdio.h>
void shift(int[]);

int main(){
  int p[5] = {15,30,28,19,61};
  int* ptr = &p[0];

  int matrix[4][5]= {
                      {1,2,3,4,5},
                      {6,6,7,8,9},
                      {10,11,12,12,13},
                      {14,15,16,17,18}
                    };
  for (int i;i<4;i++){
    int (*start)[5] = &matrix[i];
    int *starting = (int*)start;
    shift(starting);
  }

  for(int i = 0;i<4;i++){
    for(int j = 0;j<5;j++){
      printf("%d ",matrix[i][j]);
    }
    printf("\n");
  }
  return 0;
}

void shift(int ptr[]){
  int dummy[5];

  for (int j = 0; j<5 ;j++){
    dummy[j] = ptr[j];
  }

  for(int i = 0;i<5;i++){
    int temp = (i+2)%5;
    ptr[i] = dummy[temp];
  }
}
