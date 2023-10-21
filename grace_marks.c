/* Grace Marks Chapter 7 Exercise [C]*/
/* Author: Sai Date: 01/03/2022 */

#include <stdio.h>
#include <stdlib.h>

int main()
{
  int cl,fail;
  printf("Enter your class and no. of subjects failed.\n");
  scanf("%d %d",&cl,&fail);

  switch(cl)
  {
    case 1:
      if (fail<=3)
        printf("Grace marks of 5 per subject is awarded.\n");
      else
        printf("No grace marks awarded.\n");
      break;

    case 2:
      if (fail<=2)
        printf("Grace marks of 4 per subject is awarded.\n");
      else
        printf("No grace marks awarded.\n");
      break;

    case 3:
      if (fail<=1)
        printf("A grace of 5 marks is awarded.\n");
      else
        printf("No grace marks awarded.\n");
  }
  return 0;
}
