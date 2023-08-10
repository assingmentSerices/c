void main()
{
int a[16]={0};
int i,n,r;
clrscr();
printf("enter a desimal no.");
scanf("%d",&n);
//gets(a);
for(i=0;i<=15;i++)
{
a[i]=n%8;
n=n/8;

}
for(i=15;i>=0;i--)
printf("%o",a[i]);
getch();
}