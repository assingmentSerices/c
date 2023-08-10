#define size 10
#include<stdio.h>
int que[size];
int r=-1,f=-1;
void show();
int delet();
void insert();
void main()
{
int val,ch;
clrscr();
while(1)
{
printf("enter a no 1 for insert\t2 for delete\t3 for show\t4 for exit");
printf("enter a no");
scanf("%d",&ch);
switch(ch)
{
case 1:insert();break;
case 2:val=delet();
       if(val==-1)
       printf("stake is empty");
       else
       printf("%d",val);
case 3:show();break;
case 4:exit(0);
default:puts("worng choice");
}
}
}
void insert()
{
int v;
if(r==size-1)
{
printf("stke is full");
return;
}
printf("enter a no.");
scanf("%d",&v);
if(r==-1)
r=f=0;
else
r++;
que[r]=v;
}
int delet()
{
int v;
if(r==-1)
return -1;
v=que[f];
if(f==r)
f=r=-1;
else
f++;
return v;
}
void show()
{
int i;
if(f==-1)
{
puts("que is empty");
return;
}
for(i=f;i<=r;i++)
printf("%d",que[i]);
}


