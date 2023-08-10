#include<stdio.h>
#include<conio.h>
int test(int x);
int test1(int *x);
void main()
{
int a=1,*p;
clrscr();
p=&a;
printf(" a value before %u\n ",a);
test(a);
printf("a value after %u\n",a);
a=1;
printf(" a value before %u\n ",p);
test1(p);
printf("a value after %u\n",*p);
getch();
}
test(int a)
{
printf("\npahle a=%u\n",a);
a+=1; //a=a+1
printf("\n badd me a=%u\n",a) ;

}
test1(int *a)
{
printf("\n pahkeas=%u\n",a);
*a=*a+1; //a=a+1
printf("\n asdas=%u\n",a) ;
}