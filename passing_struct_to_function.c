/*Seeing how to pass structure elements to functions (Chapter 17)*/
/* Author: Sai Date: 2/10/2022 */

#include <stdio.h>

struct Student
{
  char* name;
  char* major;
  float CGPA;
};

void display1(char*,char*,float);
void display2(struct Student);
void display3(struct Student*);

int main(){
  struct Student sai = {"Saivenkat","Math",8.8};
  display1(sai.name,sai.major,sai.CGPA);
  display2(sai);
  display3(&sai);
  return 0;
}

void display1(char* name,char* major,float cgpa){
  printf("%s %s %f \n",name,major,cgpa);
}

void display2(struct Student s){
  printf("%s %s %f \n",s.name,s.major,s.CGPA);
}

void display3(struct Student *ptr){
  printf("%s %s %f \n",ptr->name, ptr->major, ptr -> CGPA);
}
