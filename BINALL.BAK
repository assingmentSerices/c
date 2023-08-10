#include<stdio.h>
#include<conio.h>
int power();
void desimal();
void main()
{
int n;
printf("enter binary no.=");
scanf("%d",&n);
 desimal(n);


getch();
}
int power(int i,int j)
{
int k,sum=1;
for(k=1;k<=j;k++)
{
sum=sum*i;
}
return sum;
}
void desimal(int n)
{
int i,sum=0,base=0,j;
while(n!=0)
{
i=n%10;
n=n/10;
j=i*power(2,base);
sum=sum+j;
base++;
}
printf("%d",sum);
}


