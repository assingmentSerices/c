#include <stdio.h>
void main()
{
int n1, n2,m;
printf("Enter two no");
scanf("%d %d", &n1, &n2);
m = (n1>n2)?n1:n2;
while(1)
{
if(m%n1==0&&m%n2==0 )
{
printf("The LCM is %d",m);
break;
}
++m;
}
getch();
}