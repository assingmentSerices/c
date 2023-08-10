#include<stdio.h>
#include<conio.h>
int even();
int odd();
int table();
void main()
{
clrscr();
printf("start\n");
even();
odd();
table();
printf("\nend");
getch();
}
even()
{
int i,n;
printf("\nenter the even value\n");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
if(i%2==0)
printf("%d ",i);
}
return 0;
}
odd()
{
int j,n;
printf("\nenter the odd value\n");
scanf("%d",&n);
for(j=1;j<=n;j++)
{
if(j%2!=0)
printf("%d ",j);
}
return 0;
}
table()
{
int i,j,n;
printf("\nenter the number\n");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
for(j=1;j<=10;j++)
{
printf("%d ",i*j);
}
printf("\n");
}
return 0;
}
