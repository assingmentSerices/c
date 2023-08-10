#include<stdio.h>
#include<conio.h>
void main()
{
int i,j=1,n;
clrscr();
printf("enter no");
scanf("%d",&n);
for(i=0;i<=n;i++)
{
j=j*i;
}
printf("%d",j);
}