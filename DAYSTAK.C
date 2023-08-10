#include<stdio.h>
struct stk{
int val;
struct stk *pre;
}*top=NULL;
52ijt4ithithji4void push();
int pop();
void show();
int peak();
void main()
{
int ch,val;
clrscr();
while(1)
{
printf("enter a no 1 for push\t2 for pop\t3 for peak\t4 for show\t5 for exit");
printf("enter a no");
scanf("%d",&ch);
switch(ch)
{
case 1:push();
       break;
case 2:val=pop();
       if(val==-1)
       {
       puts("stake is empty");
       }
       else
       printf("%d",val);
case 3:val=peak();
       if(val==-1)
       {
       puts("stake is empty");
       }
       else
       printf("%d",val);
case 4:show();break;
case 5:exit(0);
default:printf("enter right choice");
}
}
}
struct stk *create()
{
struct stk *t=(struct stk*)malloc(sizeof(struct stk));
t->pre=NULL;
return t;
}

void push()
{
struct stk *t=create();
int value;
printf("enter a no");
scanf("%d",&value);
t->val=value;
if(top==NULL)
top=t;
else
{
t->pre=top;
top=t;
}
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
//int val;
//struct stk*t=top;
if(top==NULL)
return -1;
return top->val;
}
void show()
{
struct stk *t=top;
if(top== -1)
{
puts("stake is empty");
return;
}
while(t!=NULL)
{
printf("%d\t",t->val);
t=t->pre;
}
}