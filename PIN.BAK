void main()
{
int a[]={2,4,5,8,10};
int b[]={3,6,9,12,15};
int c[]={4,8,12,16,20};
int *ptr[3];
int **pptr;
int i;
clrscr();
ptr[0]=a;
ptr[1]=b;
ptr[2]=c;
pptr=ptr;
for(i=1;i<=3;i++)
{
*pptr+=i;
**pptr+=i;
++pptr;
}
--pptr;
printf("\n%d\n",**pptr);
for(i=0;i<3;i++)
printf("%d\n",*ptr[i]);
for(i=0;i<5;i++)
printf("\n%d %d %d",a[i],b[i],c[i]);
}