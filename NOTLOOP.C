/*void main()
{
int i,j;
clrscr();
printf("enter no where to open it & close it\n");
scanf("%d%d",&i,&j);
printf("the output is-:");
if(i>j)
printf("series not posible");
else
{
l:
printf("\n%d",i++);
if(i==j)
goto l1;
goto l;
l1:
printf("\n%d",i);
}
getch();
} */
void fun(int x,int y)
{
printf("\n%d",x++);
if(x<=y)
fun(x,y);
}
void main()
{
int i,j;
clrscr();
printf("enter no open and close");
scanf("%d%d",&i,&j);
fun(i,j);
getch();
}


