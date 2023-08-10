#include<stdio.h>
#include<conio.h>
void main()
{
int ch;
clrscr();
printf("enter your choice");
scanf("%d",ch);
switch(ch)
{
case1:
printf("this is case first");
break;
case2:
printf("this is case second");
break;
case3:
printf("this is case third");
break;
default:
print("worng choice");
break;
}
getch();
}