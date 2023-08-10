#include<stdio.h>
#include<conio.h>
int main()
{
char ch;
printf("enter character : ");
clrscr();
scanf("%c", &ch);
if(ch >= 'A' && ch <= 'Z')
{
printf("upper case");
}
else if (ch >= 'a' && 'z')
{
printf("lower case");
}
else
{
printf("not english letter \n");
}
getch();
return 0;
}


