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
printf("%d",s);
getch();
}
