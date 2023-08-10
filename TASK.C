/*#include<stdio.h>
#include<conio.h>
void main()
{
//clrscr();
int a[2]={2,3};
clrscr();
*a=5;
*(a+1)=40;
printf("%d\n%d",a[0],a[1]);
getch();
} */
void main()
{
int a[2]={23,56};
clrscr();
a[2]=30;
a[3]=99;
printf("\n%d",*(a+1));
getch();
}



