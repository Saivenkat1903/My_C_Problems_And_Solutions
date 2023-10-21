/*Chapter 15 Strings how strings are stored and how they are printed*/
#include<stdio.h>

int main(){
  char name[]="SAIVENKAT";
  int i = 0;
  while(name[i] != '\0'){
    printf("%c",name[i]);
    i++;
  }
  printf("\n");

  /*One can also just specify a string and print it as such*/
  char input[25];
  printf("Enter string below.\n");
  scanf("%s",&input);
  printf("The string you have entered is \n%s.\n",input);
  return 0;
}
