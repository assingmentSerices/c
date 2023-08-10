#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
int i;
char a[100];
clrscr();
printf("enter a string\n");
gets(a);
for(i=strlen(a);i>=0;i--)
{
printf("%c",a[i]);
}}
