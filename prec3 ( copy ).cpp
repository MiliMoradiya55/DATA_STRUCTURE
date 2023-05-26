#include <stdio.h>
int main()
{
char Str[100], CopyStr[100];

int i = 0;

printf("\n Please Enter any Sentence String 1 : ");
scanf("%s",Str);

while(Str[i]!='\0')
 {
   CopyStr[i] = Str[i];
i++;
 }
CopyStr[i] = '\0';

printf("\n Copied into String 2 = %s", CopyStr);
printf("\n Total Number of Characters that we copied = %d\n", i);
return 0;
}
