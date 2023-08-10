#include<stdio.h>
#include<conio.h>
int main ()
{
clrscr();
for(int i=1; i<=10; i++)
{
 if(i == 6) //skip 6
 {
 continue;
 }
printf("%d \n", i);
}
getch();
return 0;
}