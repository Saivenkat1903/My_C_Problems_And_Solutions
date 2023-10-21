/*Chapter 15 Strings Finally learn how to input a fucking sentence I swear*/
#include<stdio.h>

int main(){
  char input[25];
  printf("Hello Enter the phrase you want.\n");
  gets(input);
  puts("The phrase you have written is;");
  puts(input);
  return 0;
}
