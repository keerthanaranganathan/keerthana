#include<stdio.h>
#include<conio.h>
void main()
{
string str,str1;
int i,n;
scanf("%s",&str);
n=strlen(str);
for(i=n-1;i>=0;i--)
{
str1=str[i];
}
printf("%s",str1);
getch();
}
