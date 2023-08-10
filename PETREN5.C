void main()
{
int i,j,n;
clrscr();
printf("enter a no");
scanf("%d",&n);
l1:
for(i=1;i<=n;i++)
{
 for(j=1;j<=n;j++)
{
 if(i==j)
  printf("*");
  else
  printf(" ");
  if(i==n)
  goto l2;
 }
 printf("\n");
 }
l2:
 for(i=1;i<=n;i++)
{
 for(j=1;j<=n;j++)
{
 if(i+j==n+1)
  printf("*");
  else
  printf(" ");
  if(i==n)
  goto l1;
 }
 printf("\n");
 }
 getch();
 }