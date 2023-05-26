#include<stdio.h>
int main()
{
 int i,j,swap,n,min,a[100]; 
 printf("HOW MANY ELEMENT ARE ENTER IN TO:");
 scanf("%d",&n);
 for(i=0;i<n;i++)
 {
  printf("ENTER THE ARRAY ELEMENT:");
  scanf("%d",&a[i]);
 }
 for(i=0;i<n-1;i++)
 {
  min=i;
  for(j=i+1;j<n;j++)
  {
   if(a[min]>a[j])
   {
    min=j;
   }
   if(min!=i)
   {
    swap=a[min];
    a[min]=a[i];
    a[i]=swap;
   }
  }
 }
 printf("\n********SELECTION SORT ELEMENT IS********\n");	
 for(i=0;i<n;i++)
 {
   printf("%d\t",a[i]);
 }
 return(0);
}
