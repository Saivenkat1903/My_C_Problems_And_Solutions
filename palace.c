/*Chapter 16  Multiple Strings*/
#include<stdio.h>
#include<string.h>

int main(){
  char list[6][20] = {"akshay","parag","raman","srinivas","gopal","rajesh"};
  int i;
  char yourname[20];
  printf("Enter your name.\n");
  scanf("%s",yourname);
  for (i=0; i<6 ;i++){
    if (strcmp(yourname,&list[i][0])==0){
      printf("Welcome, you can enter the palace.\n");
      return 0;
    }
  }
  printf("Sorry, you are a trespasser.\n");
  return 0;
}
