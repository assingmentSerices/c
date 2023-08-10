void main()
{
int x,y,z;
x=y=z=1;
++x||++y&&++x;
printf("%d%d%d",x,y,z);
getch();
}