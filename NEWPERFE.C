#include<stdio.h>
#include<conio.h>
void main()
{
int i,j=0,n;
clrscr();
printf("enter the n");
scanf("%d",&n);
for(i=1;i<n;i++)
 {
 if(n%i==0)
 {
 j=j+i;
 }
 }
 if(j==n)
 printf("%d is perfect number",n);
 else
 printf("%d is not perfact number",n);
 getch();
 }







