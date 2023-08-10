
#define MAXSIZE 5
#define true 1
#define false 0
int queue[MAXSIZE];
int front=-1,rear=-1 ;

int  peek()
{
int data=-1;
if(!isempty())
{
printf("peek=>%d",queue[front]);
}
return data;
}

int dequeue()
{
if(!isempty())
{
if(front==MAXSIZE-1)
{
front=0;
}
else
front;
return (queue[front++]);

//return ;
}
}
int isempty()
{
if(rear==-1||front-1)
{
return 1;
}
return 0;
}

int enqueue(int data)
{
//printf("enqueue=>%d",data);
if(!isfull())
{

if(front==-1)
{
 queue[++front,++rear]=data;
}
else if(rear==MAXSIZE-1)
rear=0;
else
rear=rear+1;
return printf("%d  ",queue[rear]=data);
}
else
return 0;
}

int isfull()
{
return (rear==-1&&front==0||front==rear+1?1:0);
}

void main()
{
clrscr();
enqueue(32);
enqueue(33);
enqueue(45);
enqueue(20);
enqueue(10);
enqueue(13);
printf("%d->dequeue",dequeue());
dequeue();
peek();
getch();
}




