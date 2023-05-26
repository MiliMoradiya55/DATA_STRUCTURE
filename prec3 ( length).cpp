
#include<stdio.h>
int main()
{
char word[200];
int i=0;
printf(" Enter a string: ");
scanf("%s",word);
while(word[i]!='\0')
{
i++;
}
printf("\n Length of given string is: %d",i);
//getch();
return 0;
}
