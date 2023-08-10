int fu();
void main()
{
int a=1,b;
clrscr();
b= fu(++a)+fu(a++)+fu(++a);
printf("%d",b);
getch();
}
int fu(int x)
{
  return x*x;
//printf("%d %d %d %d",x,y,z,w);

}
