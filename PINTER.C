#include<stdio.h>
#include<conio.h>
void main()
{
int a[100],*p;
clrscr();
p=a;
printf("a=%u\n ,address=%u\n, value of p=%u\n, address of p=%u\n ,value of address of p=%u\n",a,&a[1],p,&p,*p);
getch();
}