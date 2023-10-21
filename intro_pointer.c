#include<stdio.h>

int main(){
  int i = 3;
  printf("The value of i is %u\n",i);
  int *j = &i;
  *j = 4;
  printf("The value of i is %u\n",i);

  return 0;
}
