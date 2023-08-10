#include<stdio.h>
#include<conio.h>
void main()
{
int a=1,b=2,*p,*p1;
clrscr();
printf("a=%d ,b=%d\n",a,b);
p=&a;
p1=&b;
printf("add a=%u ,b=%u, p=%u, p1=%u",&a,&b,*p,*p1);
getch();
}