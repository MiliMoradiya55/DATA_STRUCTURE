#include<stdio.h>
int fibo(int x);
int main()
{
  int no,i=0;
  printf("Enter the value of no:");
  scanf("%d",&no);
  while(i<no)
  {
    printf("%d\t",fibo(i));
    i=i+1;
  }
  return(0);
}
int fibo (int n)
 {
  if(n==0)
  {
    return(1);
  }
 else if(n==1)
 {
   return(1);
 } 
 else
 {
   return (fibo(n-1)+fibo(n-2));
 }
}

