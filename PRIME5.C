#include<stdio.h>

void main()
{
int i,j,no,count=0;
clrscr();
printf("enter any no");
scanf("%d",&no);
{
for(i=2;i<=no/2;i++)
{
if(no==0||no==1)
printf("prime");
else if(no%i==0)
{
//printf("prime");
count++;
break;
}
}
if(count==1)
{
printf("not prime");
}
else
printf(" prime");
}
getch();
}