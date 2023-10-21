/*Chapter 15 Strings Program 15.2 Page 269*/
#include<stdio.h>
#include<string.h>

int main(){
  char start[10] = "A";
  char start_again[10] = "B";

  for (int i=0;i<5;i++){
    if (i==0){
      printf("%s\n",start);
    } else if (i==1){
      printf("%s\n",start_again);
    } else {
      char temp[10];
      strcpy(temp,start_again);
      strcat(temp,start);
      printf("%s\n",temp);
      strcpy(start,start_again);
      strcpy(start_again,temp);
    }
  }
  return 0;
}
/*

*/
