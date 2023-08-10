#include<stdio.h>
void xyz(int *p)
{
++*p;
if(p<=5)
xyz(p+1);
++*p;
}
void main()
{
int arr[5]={2,3,4,5,6};
int i;
xyz(arr);
for(i=0;i<5;i++)
printf("%d",arr[i]);
}