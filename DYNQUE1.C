#include<stdio.h>
struct que{
int val;
struct que *next;
}*f=NULL,*r=NULL;
void insert();
int delet();
void spe();
void show();
void rev();
void main()
{
int val,n;
clrscr();
while(1)
{
printf("enter 1 for insert,2 for delete,3 for show,4 exit,5 for insert 1 position");
printf("enter value 6 for rev");
scanf("%d",&n);
switch(n)
{
case 1:insert(); break;
case 2:val=delet();
       if(val==-1)
       printf("queve is empty");
       else
       printf("%d",val);
       break;
case 3:show();break;
case 4:exit(0);
case 5:spe();break;
case 6:rev();break;
default:printf("worng choice");
}
}
}
struct que *createnode()
{
struct que *t=(struct que*)malloc(sizeof(struct que));
t->next=NULL;
return t;
}
void insert()
{
int v;
struct que *t=createnode();
printf("enter a value");
scanf("%d",&v);
t->val=v;
if(r==NULL)
r=f=t;
else
{
r->next=t;
r=t;
}
puts("succesfull");
}

int delet()
{
int v;
struct que *t=f;
if(f==NULL)
return -1;
v=f->val;
f=f->next;
if(f==NULL)
r=NULL;
free(t);
return v;
}

void show()
{
struct que *t=f;
if(f==NULL)
{
puts("queue is empty");
return;
}
while(t!=NULL)
{
printf("%d",t->val);
t=t->next;
}
}
void spe()
{
int v;
struct que *t=createnode();
printf("enter a value");
scanf("%d",&v);
t->val=v;
if(r==NULL)
r=f=t;
else
{
t->next=f;
f=t;
}
}
void rev()
{
struct que *c=f,*t1,*p=NULL;
int i,j;
r=f;
while(c!=NULL)
{
t1=c->next;
c->next=p;
p=c;
c=t1;
}
f=p;
}

