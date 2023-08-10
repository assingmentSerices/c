#include<stdio.h>
struct stk{
int val;
struct stk *pre;
}*top=NULL;
void push();
int pop();
int peak();
void show();
void main()
{
int v,ch;
while(1)
{
printf("enter a no \n 1 for push\n 2 for pop\n 3 for peak\n 4 for show\n 5for exit");
scanf("%d",&ch);
switch(ch)
{
case 1:push();
       break;
case 2:v=pop();
       if(v==-1)
       printf("stk is empty");
       else
       printf("%d",v);
       break;
case 3:v=pop();
       if(v==-1)
       printf("stk is empty");
       else
       printf("%d",v);
       break;
case 4:show();
       break;
case 5:exit(0);
default:printf("pls enter right choise");
}
}
}
struct stk *createnode()
{
struct stk *t=(struct stk*)malloc(sizeof(struct stk));
t->pre=NULL;
return t;
}
void push()
{
int v;
struct stk *t=createnode();
printf("enter a no");
scanf("%d",&v);
t->val=v;
if(top==NULL)
{
top=t;
return;
}
t->pre=top;
top=t;
}

int pop()
{
int val;
struct stk *t=top;
if(top==NULL)
return -1;
val=t->val;
top=top->pre;
free(t);
return val;
}
int peak()
{
if(top==NULL)
return -1;
return top->val;
}
void show()
{
struct stk *t=top;
if(top==-1)
{
puts("stke is empty");
return;
}
while(t!=NULL)
{
printf("%d\t",t->val);
t=t->pre;
}
}