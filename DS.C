#define size 5
int stk[size];
int top=-1;
void push();
int pop();
int peak();
void show();
void main()
{
int ch,v;
clrscr();
while(1)
{
printf("enter a no\n1 for push\n2 for pop\n3 for peak\n4 for show\n5 for exit");
scanf("%d",&ch);
switch(ch)
{
case 1:push();
       break;
case 2:// int v;
	v=pop();
	if(v==-1)
	printf("\nstake is empty");
	else
	printf("%d",v);
	break;
case 3: //int v;
	v=peak();
	if(v==-1)
	printf("\nstake is empty");
	else
	printf("%d",v);
	break;
case 4:show();
       break;
case 5:exit(0);
default:printf("\nenter a 1-5 value");
}
}
}
void push()
{
int val;
if(top==size-1)
{
printf("\nstake is full");
return;
}
printf("enter a no");
scanf("%d",&val);
stk[++top]=val;
printf("\nsuccesfull push\n");
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
printf("\nsatke is empty");
return;
}
for(i=0;i<=top;i++)
printf("%d",stk[i]);
}
