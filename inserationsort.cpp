#include<stdio.h>
void insertion_sort(int[],int);
int main()
 {
  int i,a[50],n;
  printf("How many element you want to insert in list:");
  scanf("%d",&n);
  printf("*******Enter elements:********\n");
  for(i=0;i<n;i++)
   {
    scanf("%d",&a[i]);
   }
  insertion_sort(a,n);
  return (0);
 }
void insertion_sort(int a[],int n)
 {
  int i,j,key;
  for(i=0;i<n;i++)
   {
    key=a[i];
    j=i;
    while(j>0 && a[j-1]>key)
     {
      a[j]=a[j-1];
      j=j-1;
     }
    a[j]=key;
   }
  printf("\n****** Inseration Sorted Array******\n");
  for(i=0;i<n;i++)
   {
    printf("%d\t",a[i]);
   }
  printf("\n");
 }
