/*Chapter 15 Strings Exercise [C](c) Page 272 4567123456789129*/
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main(){
  char credit[16];
  printf("Enter Credit card number to verify.\n");
  scanf("%s",credit);
  int checksum1 = 0;
  int checksum2 = 0;
  for (int i = 0;i<16;i++){
    if (i%2==0){
      int temp = ((credit[i]-'0')*2);
      if (temp >=10){
        temp =temp-9;
      }
      checksum1 = checksum1 + temp;
    } else {
      checksum2 = checksum2 + (credit[i]-'0');
    }
  }

  printf("The first sum is %d.\n",checksum1);
  printf("The second sum is %d.\n",checksum2);
  printf("Their sum is %d.\n",checksum1+checksum2);
  if ((checksum1+checksum2) % 10 == 0){
    printf("It is a valid credit card Number.\n");
  } else{
    printf("It is not a valid credit card Number.\n");
  }
  return 0;
}
