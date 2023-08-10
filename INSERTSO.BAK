void main()
{
int *a,i,j,t,n;
//int a[100];
clrscr();
printf("enter arry size");
scanf("%d",&n);
a=(int*)malloc(n*sizeof(int));
if(a<=20)
printf("invalid");
else{
printf("enter array element");
for(i=0;i<=n-1;i++)
scanf("%d",&a[i]);
for(i=0;i<n-1;i++)
{
for(j=i+1;j>0&&a[j-1]>a[j];j--)
{
t=a[j];
a[j]=a[j-1];
a[j-1]=t;
}
}
printf("sort aaray is ");
for(i=0;i<=n-1;i++)
printf("%d ",a[i]);
}
getch();
}