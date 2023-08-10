#include<stdio.h>
#include<conio.h>
int main ()
{
clrscr();
for(int i=5; i<=50; i++)
{
if(i % 2 != 0)
{
printf("%d \n", i);
}
}
getch();
return 0;
}