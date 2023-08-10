#include<stdio.h>
#include<conio.h>
void main()
{
int n,i,f=1,p;
clrscr();
printf("enter a number",n);
scanf("%d",&n);
printf("enter the power",p);
scanf("%d",&p);
for(i=1;i<=p;i++);
{
f=f*n;
}
printf("%d",f);
getch();
}
