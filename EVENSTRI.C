#include<stdio.h>
#include<conio.h>
void main()
{
int i;
char j;
char A[100];
clrscr();
printf("enter a string\n");
//gets(A);
fflush(stdin);
scanf("%s",A);
fflush(stdin);
for(i=0;A[i];i++)
{
if(A[i]%2==1)
 printf("%s",A[i]);
}
}