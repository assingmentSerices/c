#include<stdio.h>
#include<conio.h>
void main()
{
int a,e,i,o,u;
char ch;
printf("enter your choice");
scanf("%d",&ch);
switch(ch)
{case 'a':
case 'e':
case 'i':
case 'o':
case 'u':
printf("they r vowels ");
break;
default:
printf("they r consonent");
break;
}
getch();
}

