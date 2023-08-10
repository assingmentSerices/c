void main()
{
char a[100];
int i,j,n;
clrscr();
printf("enter no and string ");
scanf("%d%s",&n,&a);
l2:{
for(i=1;i<=n;i++)
{
for(j=1;j<=n;j++)
{
if(i==j)
printf("%s",a);
else
printf(" ");
if(i==n)
goto l;
}
printf("\n ");
}   }
l:
{
for(i=n;i>=1;i--)
{
for(j=n;j>=1;j--)
{
if(i+j==n+1)
printf("%s",a);
else
printf(" ");
if(i==1)
goto l2;
}
}
printf("\n ");
}

getch();
}

