#include<stdio.h>
#include<conio.h>
void main()
{
int a=10,b=76,c=67;
clrscr();
printf("enter the value of a,b and c");
if (a<b&&a<c)
{
printf("true");
}
else if(b>c&&c<b)
{
printf("true");
}else
{
printf("false");
}
getch();
}
