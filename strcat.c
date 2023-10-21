/*Chapter 15 Strings some string libraries*/
#include<stdio.h>
#include<string.h>

void xstrcat(char* target, const char* source);

int main(){
  char source[] = "Folks!", target[30] = "Hello";
  strcat(target,source);
  xstrcat(target,"Hi");
  printf("source string = %s\n",source);
  printf("target string = %s\n",target);
  return 0;
}

void xstrcat(char* target, const char* source){
  while(*target != '\0'){
    target++;
  }
  for (int i = 0;i<strlen(source);i++){
    *target = *source;
    source++;
    target++;
  }
  *target = '\0';
}
