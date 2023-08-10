#include<stdio.h>
#include<conio.h>
void main()
{
int i,j,n,t;
clrscr();
printf("enter the value of n");
scanf("%d",&n);
for(i=2;i<=n;i++)
{
t=0;
for(j=2;j<i;j++)
{                                     ff
if(i%j==0)
{
t=1;
break;
}
}
if(t==0)
printf("%d\n",i);
}
getch();
}
