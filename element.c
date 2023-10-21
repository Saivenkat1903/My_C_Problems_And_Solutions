/* Chapter 16 Multiple Strings Problem 16.1 */
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
  char *received_strings[5],input[20];
  char *temp;
  int i,len;
  for (i = 0; i < 5 ; i++){
    printf("Enter element in periodic table.\n");
    scanf("%s",input);
    len = strlen(input);
    temp = (char*)malloc(len+1);
    strcpy(temp,input);
    received_strings[i] = temp;
  }
  printf("\n\n");
  printf("Enter an element to see if it's in the given list of elements.\n");
  char check[20];
  scanf("%s",check);
  for (i=0;i<5;i++){
    if (strcmp(check,received_strings[i])==0){
      printf("Yes the element %s is present.\n",check);
      return 0;
    }
  }
  printf("The element specified is not present.\n");
  return 0;
}
