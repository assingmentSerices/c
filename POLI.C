#include<stdio.h>
#include<conio.h>
void main()
{
int i,n,j=0,t;
clrscr();
printf("enter a no");
scanf("%d",&n);
t=n;
while(n!=0)
{
i=n%10;
n=n/10;
j=j*10+i;
}
printf("%d",j);
if(j==t)
 {
printf(" polindrom");
}
else
{
printf("not  polidrom");
}
}
