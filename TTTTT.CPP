#include<stdio.h>
#include<conio.h>
void main()
{
int i,j=0,result,number;
clrscr();
printf("enter the value ");
scanf("%d",&number);
for(i=1;i<number;i++)
 {
 if(number%i==0)
 {
 j=j+i;
 }
 }
 if(j==number)
 printf("%d is perfect number",number);
 else
 printf("%d is not perfact number",number);
 getch();
 }







