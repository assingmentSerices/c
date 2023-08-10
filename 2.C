void main()
{
int i,j,n;
printf("enter a no what value change to char to asii value\n");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
j=getch();
printf("%c",j);
}
getch();
}