#include<stdio.h>
#include<conio.h>
int isprime(int num)
{
int i;
for(i=2;i<=num/2;i++)
{
if(num%i==0)
return 0;
}
return 1;
}
void main()
{
int arr[10],i,sum=0;
clrscr();
for(i=0;i<10;i++)
{
printf("\n%d enter number",i+1);
scanf("%d",&arr[i]);
}
for(i=0;i<10;i++)
{
if(isprime(arr[i]))
sum+=arr[i];
  }
printf("\n%d sum of digits",sum);

getch();
}



