#include<stdio.h>
#include<conio.h>
void revstr(char str[])
{
int start=0,end=strlen(str)-1;
char c;
while(start<end)
{
c=str[start];
str[start]=str[end];
str[end]=c;
start++;
end-- ;
}
}
void main()
{
 char s[]=" ";
 clrscr();
 printf("enter the string");
 scanf("%s",s);
 revstr(s);
 printf("\n%s",s);
 getch();
 }





