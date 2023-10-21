/*Chapter 16  Multiple Strings malloc lets us make an array of pointers for each input string*/
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main(){
  char *names[5],n[20];
  char* temp;
  int i,len;
  for (int i = 0; i<6 ;i++){
    printf("Enter word.\n");
    scanf("%s",n);
    len=strlen(n);
    temp = (char*)malloc(len+1);
    strcpy(temp,n);
    names[i]=temp;
  }
  for (i = 0 ; i<6 ; i++ ){
    printf("%s\n",names[i]);
  }
  return 0;
}
