/*Using pointers to change value of array*/

#include <stdio.h>
void display_element(int);
void add_one_to_element(int *);

int main(){
  int arr[10] = {1,2,3,4,5,6,7,8,9,10};
  int i;
  for (i=0;i<=9;i++){
    display_element(arr[i]);
  }
  printf("\n");
  for (i=0;i<=9;i++){
    add_one_to_element(&arr[i]);
  }

  for (i=0;i<=9;i++){
    printf("%d\n",arr[i]);
  }
  return 0;
}

void display_element(int a){
  printf("%d ",a);
}

void add_one_to_element(int *a){
  *a = *a + 1;
}
