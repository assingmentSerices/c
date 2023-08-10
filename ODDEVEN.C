#include<stdio.h>
#include<conio.h>
int even();
int odd();
int table();
void main()
{
clrscr();
printf("start");
even();
odd();
table();
even();
printf("\nend:==%d");
getch();
}
even()
{
int i,n;
for(i=2;i<=n;i++)
{
printf("%d",n);
}
return 0;
}
odd()
{
int j,n;
for(j=1;j<=n;j++)
{
printf("%d",n);
}
return 0;
}
table()
{
int i,j,n;
for(i=1;i<=n;i++)
{
for(j=i;j<=n;j++)
{
printf("%d",n);
}
}
return 0;
}