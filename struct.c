/*Absolute Value function (Chapter 17*/
/* Author: Sai Date: 2/10/2022 */

#include <stdio.h>

int main(){

  struct Book
  {
    char name;
    float price;
    int pages;
  };

  struct Book array_of_books[5];
  int i,dummy;

  for(i=0;i<5;i++){
    printf("Enter name, price and pages of book.\n");
    scanf("%c %f %d",&array_of_books[i].name,&array_of_books[i].price,&array_of_books[i].pages);
    dummy=getchar();
    while (dummy!='\n'){
      ;
    }
  }

  for(i=0;i<5;i++){
    printf("Name of first book is %c and it's price is %f. It has %d pages.\n",array_of_books[i].name,array_of_books[i].price,array_of_books[i].pages);
  }

  return 0;
}
