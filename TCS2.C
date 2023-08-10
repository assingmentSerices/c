void main()
{
int i,n,j;
clrscr();
printf("enter a no");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
for(j=i;j>=1;j--)
printf("%c",'A'+j-1);
printf("\n");
}
getch();
}