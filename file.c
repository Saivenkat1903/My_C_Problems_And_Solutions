/*Finally opening files (Chapter 19) */
/* Author: Sai Date: 2/10/2022 */

#include <stdio.h>

int main(){
  FILE *fp;
  char ch;

  fp = fopen("romeo.txt","r");
  while (1){
    ch = fgetc(fp);
    if(ch==EOF){
      break;
    }
    printf("%c",ch);
  }
  printf("\n");
  fclose(fp);
  return 0;
}
