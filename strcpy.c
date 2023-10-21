/*Chapter 15 Strings some string libraries*/
#include<stdio.h>
#include<string.h>

void xstrcpy(char*,const char*);

int main(){
  char source[] = "Sayonara", target[20];
  strcpy(target,source);
  xstrcpy(target,"H");
  printf("source string = %s\n",source);
  printf("target string = %s\n",target);
  return 0;
}

void xstrcpy(char* target,const char* source){
  int check = 0;
  while(*source != '\0'){
    *target = *source;
    target++;
    source++;
  }
  *target ='\0';
}
