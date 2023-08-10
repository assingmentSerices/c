#include<conio.h>
void main()
 {
  int i,j,k,sum=1;
  clrscr();
  printf("enter a two no.");
  scanf("%d%d",&i,&j);
  for(k=1;k<=j;k++)
  {
   sum=sum*i;
  }
  printf("%d",sum);
  }