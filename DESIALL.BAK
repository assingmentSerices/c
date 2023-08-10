#include<stdio.h>
 void bin();
 void octal();
 void hexa();
 void main()
 {
 int n;
 clrscr();
   printf("enter a desimal no.");
   scanf("%d",&n);
   bin(n);
   octal(n);
   hexa(n);
   getch();
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
printf("binary=");
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
printf("%o",a[i]);
}
void hexa(int n)
{
int a[16]={0};
int i;
for(i=0;i<=15;i++)
{
a[i]=n%16;
n=n/16;
}
printf("\nhexa=");
for(i=15;i>=0;i--)
printf("%X",a[i]);
}