#include<stdio.h>
#include<conio.h>
void main()
{
int i,j,n,t=1;
clrscr();
printf("enter the value of n");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
for(j=1;j<=i;j++)
{
printf("%d ",t);
t=t+2;
}

printf("\n");
}getch();
}

