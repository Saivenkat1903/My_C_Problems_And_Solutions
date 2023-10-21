/*Chapter 15 Strings Exercise [C](b) Page 272*/
#include<stdio.h>
#include<string.h>

int main(){
  char number[10];
  printf("Enter ISBN number to verify.\n");
  scanf("%s",number);
  int checksum = 0;
  int i = 0;
  while (number[i]!='\0'){
    checksum = checksum + ((number[i]-'0')*(i+1));
    i++;
  }
  printf("The checksum is %d.\n",checksum);
  if (checksum % 11 == 0){
    printf("It is a valid ISBN Number.\n");
  } else{
    printf("It is not a valid ISBN Number.\n");
  }
  return 0;
}
