/*The pointers can be used to flip through arrays since the elements point 4 bytes apart*/
#include <stdio.h>

int main(){
  int exam[5]={2,4,6,7,8};
  int i, *ptr;
  ptr = &exam[0];

  for (i=0;i<=4;i++){
    printf("The pointer address is %u and it's corresponding value is %d.\n",ptr,*ptr);
    ptr++;
  }
  return 0;
}
