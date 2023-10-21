/*Chapter 16  Multiple Strings using an array of pointers to show how easy it is to
  switch strings in the array.*/
#include<stdio.h>
#include<string.h>

int main(){
  char* names[] = {"Akshay","Sai","Ketan"};
  char* temp;
  printf("%s and %s.\n",names[0],names[1]);
  temp = names[0];
  names[0] = names[1];
  names[1] = temp;
  printf("%s and %s.\n",names[0],names[1]);
  return 0;
}
