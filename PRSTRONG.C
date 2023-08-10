void main()
{
int n,r,s=0,t;
t=n;
clrscr();
printf("enter the number");
scanf("%d",&n);
while(n!=0)
{
r=n%10;
s=s+fat(r);
n=n/10;
}
if(t==n)
{
printf("strong number");
}
else
printf("not strong number");
getch();
}



}



