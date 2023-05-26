#include<stdio.h>
int main()
{
 int i,j,swap,n,a[100];
 printf("HOW MANY ELEMENT ARE ENTER IN TO:");
 scanf("%d",&n);
 for(i=0;i<n;i++)
 {
  printf("ENTER THE ARRAY OF ELEMENT IS:");
  scanf("%d",&a[i]);
 }
  for(i=0;i<n;i++)
  {
    for(j=0;j<n-i-1;j++)
    {
     if(a[j]>a[j+1])
     {
      swap=a[j];
      a[j]=a[j+1];
      a[j+1]=swap;
     }    }
   }
   printf("\n*******BUBLR SORTED ELEMENT IS********\n");
   for(i=0;i<n;i++)
   {
    printf("  %d  ",a[i]);
   }
   return(0);
}
