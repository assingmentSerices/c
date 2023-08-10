#include<stdio.h>
#include<conio.h>
void main()
{
int i,t,j,add=0,rev=0;
clrscr();
printf("enter a int no");
scanf("%d",&i);
t=i;
while(i!=0)
{
j=i%10;
i=i/10;
add=add+j;
}
printf("%d",add);
 while(t!=0)
{
j=t%10;
t=t/10;
rev=rev*10+j;
}
printf("%d",rev);
}
