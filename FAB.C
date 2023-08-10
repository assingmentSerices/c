#include<stdio.h>
#include<conio.h>
void main()
{
int i,n1=0,n2=1,add;
clrscr();
printf("%d",n1);
printf("%d",n2);
for(i=2;i<10;i++)
{
add=n1+n2;
n1=n2;
n2=add;
printf("%d",add);
}getch();
}