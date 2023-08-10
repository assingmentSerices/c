void main()
{
int i,j,n;
int number[]={1,5,10,50,100,500,1000,5000,10000,50000,100000};
char roman[]={I,V,X,L,C,D,M,v,x,l,c};
clrscr();
printf("enter a no");
scanf("%d",&n);
for(i=0;i<11;i++)
{
 if(n>=i)