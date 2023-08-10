#include<stdio.h>
#include<conio.h>
int main ()
{
int n;
clrscr();
printf("enter number : ");
scanf("%d", &n);
for(int i=10; i>=1; i--)
{
printf("%d\n", n * i);
}
getch();
return 0;
}
