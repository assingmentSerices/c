#include<stdio.h>
#include<conio.h>
void main()
{
int i,j,n,count=0,t;
clrscr();
printf("1 to 100 prime no");
for(i=1;i<=100;i++)
 {
  count=0;
  for(j=2;j<=i/2;j++)
  {
   if(i%j==0)
   {
   count++;
   break;
   }
}
   if(count==0&&i!=0)
   {

    t=i%10;
    if(t%3==0)
    {
    continue;
    }
  // printf("\n%d",i);
   else
   printf("\n%d",i);
   }
   }
   getch();
   }