#include<stdio.h>
#include<math.h>
void main()
{
int i,j,n,sum,b=0,s=0;
clrscr();
printf("enter your octal no");
scanf("%d",&n);
while(n!=0)
{
j=n%10;
n=n/10;
sum=j*pow(8,b);
 s=s+sum;
 b++;
}
printf("%d",s);
getch();
}


