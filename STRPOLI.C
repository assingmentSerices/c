#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
int i,j,count;
char a[100];
clrscr();
printf("enter a string\n");
gets(a);
j=strlen(a);
for(i=0;i<=j;j--,i++)
{
if(a[i]==a[j-1])
{
count=0;
}
else if(a[i]!=a[j-1])
{
count++;
break;
}
}
if(count==0)
{
printf("polindrom");
}
else
{
printf("not polindrom");
}
}
