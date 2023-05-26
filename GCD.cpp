#include<stdio.h>
int gcd(int,int);
int main()
{
  int n,m,div;
  printf("Enter the two numbers:");
  scanf("%d%d",&n,&m);
  div=gcd(n,m);
  printf("The greatest comman factor of %d and %d is %d",n,m,div);
  return(0);
}
int gcd(int n,int m)
{
   if(m<=n&&n%m==0)
   {
     return m; 
   }
   if(n<m)
   {
     return gcd(m,n);
   }
   else
   {
     return gcd(m,n%m);
   }
}
