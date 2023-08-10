void main()
{
int i,n,t=0,s=1,f=1,sum=0;
clrscr();
printf("enter a no");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
sum=sum+(f*f);
printf(" %d",f);
t=s+f;
f=s;
s=t;
}
printf("\n%d",sum);
getch();
}
