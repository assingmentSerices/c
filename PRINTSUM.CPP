#include<stdio.h>
#include<conio.h>
int main()
{
 int n;
 clrscr();
 printf("enter number : ");
 scanf("%d\n", &n);

 int sum = 0;
 for(int i=1; i<=n; i++)
 {
  sum = sum + i; //sum += i
  printf("sum is %d \n", sum);
 }
  getch();
  return 0;
}