#include<stdio.h>
#include<conio.h>
void main()
{
int f=0,s=1,n,r,i;
clrscr();
printf("enter a no");
scanf("%d",&r);
for(i=0;i<r;i++)
{
if(i<=1)
printf("\n%d",i);
else
{
n=f+s;
f=s;
s=n;
if(n>r)
break;
printf("\n%d",n);
}
}
getch();
}