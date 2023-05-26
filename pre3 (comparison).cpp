#include<stdio.h>
#include<string.h>
int xstrcmp(char[], char[]);
int main()
{
char str1 [30], str2 [30];
int m;
printf("\n enter first string:");
scanf("%s",str1);
printf("\n enter second string:");
scanf("%s",str2);
m = xstrcmp(str1, str2);
if(m==0)
{
printf("both string are different");
}
else if(m==1)
{
printf("both string are same");
}
}
int xstrcmp( char *S1, char *S2)
{
int i1, i2, flag=0, i=0;
i1 = strlen(S1);
i2 = strlen(S2);
if( i1 != i2)
{
return(0);
}
while(i< i1)
{
if( *S1 != *S2)
{
	return(0);
}
else
{
S1++;
S2++; 
i++;
flag=1;
}
}
if(flag==1)
{
return(1);
}

return(0);
}

