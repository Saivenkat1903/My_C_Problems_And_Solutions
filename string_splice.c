/*Chapter 15 Strings Program 15.1 Page 267*/
#include<stdio.h>
#include<string.h>

int main(){
  char extract[4];
  char sample[] = "Working with strings is fun.";
  printf("Enter which position to start from.\n");
  int position;
  scanf("%d",&position);

  for (int i = position; i<position+4 ;i++){
    extract[i-position]=sample[i];
  }

  printf("%s\n",extract);
  return 0;
}
