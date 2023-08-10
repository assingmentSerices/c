#include<stdio.h>
#include<conio.h>
void main()
{
 int age;
 clrscr();
 printf("enter you age");
 scanf("%d",&age);
 if(age>=18)
 {
 printf("you are able to vote");
 }
 else
 {
 printf("you are not able to vote");
 }
 getch();
 }