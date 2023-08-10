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
a[i]=n%16;
n=n/16;

}
for(i=15;i>=0;i--)
printf("%X",a[i]);
getch();
}