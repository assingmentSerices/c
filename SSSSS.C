#include<stdio.h>
#include<conio.h>
void main()
{
int i,j;
char A[100]="hello";
clrscr();
//printf("enter a string\n");
//scanf("%s",A[100]);
printf("enter a found no\n");
scanf("%s",&A[j]);
for(i=0;A[i]!=NULL;i++)
{
if(A[i]==A[j])
break;
}
if(A[i]==A[j])
{
printf("found\n");
}
else
printf("not found\n");
}
