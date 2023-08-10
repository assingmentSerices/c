#include<stdio.h>
#include<conio.h>
int power();
void desimal();
void bin();
void octal();
void main()
{
int n;
clrscr();
printf("enter hexa no.=");
scanf("%x",&n);
 desimal(n);
 bin(n);
octal();
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
i=n%16;
n=n/16;
j=i*power(16,base);
sum=sum+j;
base++;
}
printf("desimal=%d",sum);
}
void bin(int n)
{
int a[16]={0};
int i;

for(i=0;i<=15;i++)
{
a[i]=n%2;
n=n/2;
}
printf("\nbinary=");
for(i=15;i>=0;i--)
printf("%d",a[i]);
}
void octal(int n)
{
int a[16]={0};
int i;

for(i=0;i<=15;i++)
{
a[i]=n%8;
n=n/8;
}
printf("\noctal=");
for(i=15;i>=0;i--)
printf("%d",a[i]);
}

