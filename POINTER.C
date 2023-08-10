#include<stdio.h>
#include<conio.h>
void main()
{
int c=10;
int d,b=20;
int *p=&c;
int a[100]={10,20,30,40,50} ;
clrscr();
d=printf("%u %u %u %u %u %u %u %u %u\n",&c,p,c,*p,*(p-1),a[0],0[a],*p+1,&b);
printf("%d",d);
scanf("%d %d",100,200);
c=(*(int*)100)+(*(int*)200);
printf("%u",c);
getch();

}
