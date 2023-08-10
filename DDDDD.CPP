#include<stdio.h>
#include<conio.h>
void main()
{
int ch;
clrscr();
printf("enter the any month number");
scanf("%d",ch);
switch(ch)
{
case 1:
case 2:
case 4:
case 5:
printf("this month are 31 days");
break;
case 6:
case 7:
case 8:
printf("this month are 30 days");
break;
case 9:
case 10:
case 11:
case 12:
printf("this month are 29 days");
break;
}
getch();
}





