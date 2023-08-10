#include<stdio.h>
#include<conio.h>
int addition();
int subtraction(int x);
int multiplication(int x,int y);
int division(int x, int y, int z);
void main()
{
int x,y,z,r;
clrscr();
printf("enter the 3 value");
scanf("%d%d%d%d",&x,&y,&z,&r);
addition();
r=subtraction( x);
r=multiplication( x, y);
r=division( x, y, z);
addition();
printf("\n end:==%d",r);
getch();
}
addition()
{
int x,y;
printf("enter 2 values");
scanf("%d%d",&x,&y);
return 0;
}
subtraction(int x)
{
int a,b;
printf(" subtraction:%d\n",a-b);
return a-b;
}
multiplication(int x,int y)
{
int a,b;
printf("multiplication:%d\n",a*b);
return(a*b);
}
division(int x,int y,int z)
{
int a,b,c;
printf("division:%d\n",a/b/c);
return (a/b/c);
}


