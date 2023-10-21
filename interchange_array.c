/* Interchange even placed array elements with the
   odd placed array elements Chapter 13 Problem 13.1*/
/* Author: Sai Date: 03/03/2022 */

#include <stdio.h>

void change(int *n,int);
int main()
{
  int n,i;
  extern int arr[];
  printf("Enter the number of elements in the array.\n");
  scanf("%d",&n);

  for (i=0;i<n;i++)
  {
    printf("Enter element of %dth element of array.\n",i);
    scanf("%d",&arr[0]);
  }
  change(arr,n);
}

void change(int *p,int n)
{
  int newarr[n];
  int *temp;
  int j,l,k;
  *temp = *p;
  for (j=0;j<=n;j=j+2)
  {
    newarr[j]=arr[temp+1];
  }
  *temp = *p;
  for (l=0;l<=n;l=l+2)
  {
    newarr[l]=arr[temp];
  }
  for (k=0;k<n;k++)
  {
    printf("%d",newarr[k]);
  }
}
