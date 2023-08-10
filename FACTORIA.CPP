#include<stdio.h>
#include<conio.h>
int main()
{
int n;
clrscr();
printf("enter number : ");
scanf("%d", &n);
int fact = 1;
for(int i=1; i<=n; i++)
{
fact = fact * i;
}
printf("final factorial is %d", fact);
getch();
return 0;
}