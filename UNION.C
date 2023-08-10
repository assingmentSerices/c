#include<stdio.h>
#include<conio.h>
void main()
{
union test
{
int a,b;
int c,d;
}t,t1 ;
union test;
clrscr();

t.a=2;
t.b=1;
t.c=4;
t.d=5;

printf("%d\n %d\n %d\n %d\n",t.a,t.b,t.c,t.d);
getch();
}