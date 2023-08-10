void main()
{
long int l,n,i,j,sum=0;
clrscr();
printf("enter a no");
scanf("%ld",&n);

L1: while(n!=0)
//while(1)
{
j=n%10;
n=n/10;
sum=sum+j;
}
printf("sum=%d\n",sum);
if(sum>10)
{
n=sum;
sum=0;
goto L1;
}
printf("last sum=%ld",sum);
getch();
}