#include<stdio.h>
//We shall see how pointers are used to change the value of a variable in a function
void change_to_five(int*);
void no_change(int);

int main(){
  int x1 = 1;
  int x2 = 1;
  printf("The value of x1 is %d\n",x1);
  printf("The value of x2 is %d\n",x2);
  change_to_five(&x1);
  no_change(x2);
  printf("The value of x1 is %d\n",x1);
  printf("The value of x2 is %d\n",x2);
  return 0;
}

void change_to_five(int *a){
  *a = 5;
}

void no_change(int a){
  a = 5;
}
