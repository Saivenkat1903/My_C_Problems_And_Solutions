/*Chapter 15 Strings some string libraries*/
#include<stdio.h>
#include<string.h>

int main(){
  char string1[] = "Jerry", string2[] = "Ferry";
  int i,j,k;
  i = strcmp(string1,"Jerry");
  j = strcmp(string1,string2);
  k = strcmp(string1,"Jerry boy");
  printf("%d %d %d\n",i,j,k);
  return 0;
}
