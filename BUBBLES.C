void main()
{
int a[100];
int i,j,t,size;
clrscr();
printf("enter size of array");
scanf("%d",&size);
printf("enter the int value for array");
for(i=0;i<size;i++)
scanf("%d",&a[i]);
for(i=0;i<=size-1;i++)
{
for(j=0;j<=size-i-1;j++)
{
if(a[j]>a[j+1])
{
t=a[j];
a[j]=a[j+1];
a[j+1]=t;
}
}
}
for(i=0;i<size;i++)
printf("%d ",a[i]);

getch();
}