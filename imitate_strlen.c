/*Chapter 15 Strings some string libraries*/
#include<stdio.h>
int xstrlen(char*);

int main(){
  char arr[]="Bamboozled";
  int len1,len2;
  len1 = xstrlen(arr);
  len2 = xstrlen(("Humpty Dumpty"));
  printf("String = %s Length = %d\n",arr,len1);
  printf("String = %s Length = %d\n","Humpty Dumpty",len2);
  return 0;
}

int xstrlen(char *word){
  int length = 0;
  while (*word != '\0'){
    length++;
    word++;
  }
  return length;
}
