#include<stdio.h>
#include<conio.h>
void main()
{
int i,n,fact=1;
clrscr();
printf("enter a no");
scanf("%d",&n);
for(i=0;i<=n;i++)
{
fact=i*fact;
}
printf("%d",fact);
getch();
}