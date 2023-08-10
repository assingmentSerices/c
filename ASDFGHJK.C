#include<stdio.h>
#include<conio.h>
void xyz(int x){
printf("%d",x);
if(x)
xyz(x-1);
printf("%d",x);
}
void abc(int a){
printf("%d",a);
xyz(a);
if(a)
abc(a-1);
printf("%d",a);
}
void main()
{
abc(2);

 }