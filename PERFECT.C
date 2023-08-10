#include<stdio.h>
#include<conio.h>
void main()
{
int i,j,n,sum=0,t;
clrscr();
printf("enter a no");
scanf("%d",&n);
t=n;
for(i=1;i<=n/2;i++)
{
if(n%i==0)
{
sum=sum+i;
}
}
if(sum==t)
{
printf("%d is perfect no.",sum);
}
else
{
printf(" not perfect");
}
}
