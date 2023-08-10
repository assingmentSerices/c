#include<stdio.h>
#include<math.h>
int power(int i,int j)
 {
  int k,sum=1;
  for(k=1;k<=j;k++)
  {
   sum=sum*i;
  }
 // printf("%d",sum);
  return sum;
  }
void bin(int n)
{
int a[16];
int i,r;
for(i=0;i<=15;i++)
{
a[i]=n%2;
n=n/2;
}
printf("binary=");
for(i=15;i>=0;i--)
printf("%d",a[i]);
}
void hexa(int n)
{
int a[16]={0};
int i,r;
for(i=0;i<=15;i++)
{
a[i]=n%16;
n=n/16;
}
printf("\nhexa=");
for(i=15;i>=0;i--)
printf("%X",a[i]);
}
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
sum=j*power(8,b);
 s=s+sum;
 b++;
}
i=s;
printf("desimal=%d\n",s);
bin(s);
hexa(i);
getch();
}

