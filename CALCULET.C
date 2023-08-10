#include<stdio.h>
#include<conio.h>
void main()
{
int n1,n2,n3,res;
int a[100];
clrscr();
printf("enter a no.\n");
scanf("%d%d",&n1,&n2);
//gets(a);
printf("1 for addition\n");
printf("2 for sub\n");
printf("3 for multipication\n");
printf("4 for divition\n");
printf("5 for moduletion\n");
scanf("%d",&n3);
switch(n3)
{
case 1:{printf("res=%d",n1+n2);
break;  }
case 2:{printf("res=%d",n1-n2);
break;  }
case 3:{printf("res=%d",n1*n2);
break;  }
case 4:{printf("res=%d",n1/n2);
break;   }
case 5:{printf("res=%d",n1%n2);
break;}
default:printf("wrong value");
}
getch();
}