/* Chapter 16 Multiple Strings Problem 16.3 */
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void reverse_string(char[]);

int main(){
  char *str[]={"To ere is human..."
                  "But to really mess things up...",
                  "One needs to know C!!"};
  int i;
  for (i=0;i<3;i++){
      reverse_string(str[i]);
      printf("%s\n",str[i]);
    }
  return 0;
}

void reverse_string(char p[]){
  for (int i=0; i<strlen(p)/2 ;i++){
    char temp;
    p[i] = temp;
    p[i] = p[strlen(p)-1-i];
    p[strlen(p)-1-i] = temp;
  }
}
