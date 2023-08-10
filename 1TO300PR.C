#include<stdio.h>
void main()
{
int a,i,count=0;
clrscr();
//printf("enter no");
//scanf("%d",&a);
for(a=1;a<=300;a++)
{
count=0;
for(i=2;i<a/2;i++)
{
if(a%i==0)
{
count++;
break;
}
}
if(count==1)
continue;
//printf("not prime no");
else
printf(" %d",a);
}
getch();
}

