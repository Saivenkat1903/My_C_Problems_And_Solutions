/*Gives salary based on table Chapter 4 example 4.3*/
/* Author: Sai Date: 23/2/2022 */

#include <stdio.h>

int main()
{
  char gen,qual;
  int yos;

  printf("Enter your gender.\n");
  scanf("%c",&gen);
  printf("Enter your years of service.\n");
  scanf("%d",&yos);
  printf("Enter your qualification.\n");
  scanf(" %c",&qual);

  if (gen=='M')
  {
    if (yos>=10 && qual=='P')
      printf("Salary is 11,000.\n");
    else if (yos>=10 && qual=='G')
      printf("Salary is 10,000.\n");
    else if (yos<10 && qual=='P')
      printf("Salary is 10,000.\n");
    else if (yos<10 && qual=='G')
      printf("Salary is 7,000.\n");
  }
  else if (gen=='F')
  {
    if (yos>=10 && qual=='P')
      printf("Salary is 12,000.\n");
    else if (yos>=10 && qual=='G')
      printf("Salary is 9,000.\n");
    else if (yos<10 && qual=='P')
      printf("Salary is 10,000.\n");
    else if (yos<10 && qual=='G')
      printf("Salary is 6,000.\n");
  }
  return 0;
}
