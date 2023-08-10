#include<stdio.h>
#include<conio.h>
void main()
{
int i,j,n;
clrscr();
printf("enter the value of j and n");
scanf("%d%d",&n,&j);
printf("even values are: ");
i=n;
while(i<=j)
{
if(i%2==0)
 printf("%d,",i);
 i++;
}
i=n;
printf("\n odd values are: ");
while(i<=j)
{
if(i%2!=0)
printf("%d,",i);
i++;
}
getch();
}



