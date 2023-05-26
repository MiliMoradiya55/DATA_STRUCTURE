#include<stdio.h>
int fact(int);
int main()
{
  int a,n;
  printf("Enter the value of n:");
  scanf("%d",&n);
  a=fact(n);
  printf("%d",a);
return(0);
}
int fact(int x)
{
  int f=1,n;
  if(x==1)
    {
      return(f);
    }
  else
    {
     f=x*fact(x-1);
     }
   return(f);
}
