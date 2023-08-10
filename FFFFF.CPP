#include<stdio.h>
#include<conio.h>
void main()
{
int i,j;
clrscr();
for(i=2;i<=50;i=i++)
{
for(j=i;j<=40;j=j++)
{
printf("%d%d",i,j);
}
}
getch();
}