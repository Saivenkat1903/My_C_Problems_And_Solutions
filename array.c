/* Forming an array of marks and getting their average*/

#include <stdio.h>
int main(){
  int marks[5];
  int i;
  int sum=0;
  float avg;
  for (i=0; i<=4 ; i++){
    printf("Please enter marks.\n");
    scanf("%d",&marks[i]);
  }

  for (i=0; i<=4 ; i++){
    sum = sum + marks[i];
  }
  avg = sum/5;
  printf("The average marks are %f\n",avg);
  return 0;
}
