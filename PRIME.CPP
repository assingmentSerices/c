#include<stdio.h>
#include<conio.h>
void main()
{
int i,n,f=0;
clrscr();
printf("enter the number");
scanf("%d",&n);
for(i=2;i<=n/2;i++)
{
  if(n%i==0)
   {
  printf("%d not prime number",n);
  f=1;
  break;
  }
  }
  if(f==0)
  {
  printf("%d prime number",n);
  }

  getch();
  }




