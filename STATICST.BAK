#define size 5
int stk[size];
int top=-1;
void show();
void push();
int peak();
int pop();
void main()
{
int val,ch;
clrscr();
while(1)
{
//clrscr();
puts("1 for push");
puts("2 for pop");
puts("3 for peak");
puts("4 for show");
puts("5 for exit");
printf("enter a value\n");
scanf("%d",&ch);
switch(ch)
{
case 1:{
       push();
       break;
       }
case 2:
    {
      val=pop();
       if(val==-1)
       printf("stake is empty\n");
       else
       printf("%d\n",val);
       break;
       }
case 3:{
       val=peak();
       if(val==-1)
       printf("stake is empty\n");
       else
       printf("%d\n",val);
       break;
       }
case 4:{
       show();
       break;
       }
case 5:exit(0);
default:printf("wrong no\n");
}
}
}
void push()
{
int val;
if(top==size-1)
{
printf("stake full\n");
return;
}
printf("enter a no\n");
scanf("%d",&val);
stk[++top]=val;
printf("succesful\n");
}
int pop()
{
int val;
if(top==-1)
return -1;
val=stk[top--];
return val;
}
int peak()
{
int val;
if(top==-1)
return -1;
val=stk[top];
return val;
}
void show()
{
int i;
if(top==-1)
{
puts("stake full\n");
return;
}
for(i=0;i<=top;i++)
printf("%d\n",stk[i]);
}
