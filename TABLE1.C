#include<stdio.h>
#include<conio.h>
void main()
{
 int a=1,i,j,n,t,m;
 clrscr();
 printf("enter a no where want to start the table\n");
 scanf("%d %d",&n,&m);
// printf("enter a no where close the table\n");
// scanf("%d",&m);

  for(a=1;a<=10;a++)
  {
   for(i=n;i<=m;i++)
  {
     printf("%d\t",i*a);
   }
   printf("\n");
  }
  getch();
   }

