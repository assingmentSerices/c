#include<stdio.h>
#include<conio.h>
int sum();
int sum1(int x,int y,int z);

void main()
{
int x,y,z,r;
clrscr();
printf("enter 3 values");
scanf("%d%d%d",&x,&y,&z);
sum();
r=sum1(x,y,z);
sum();
printf("\nend:=== %d",r);
getch();
}

sum()
{
int a,b;
printf("enetr inside sum function vakue")         ;
scanf("%d%d",&a,&b);
printf("sum =%d\n",a+b);
return 0;
}


sum1(int x,int y,int z)
{
printf("sum1: %d\n",x+y+z);
return x*y*z;
}