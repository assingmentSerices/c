#define MAXSIZE 5
#define true 1
#define false 0
int deque[MAXSIZE];
int front=-1,rear=-1 ;

int  peek()
{
int data=-1;
if(!isempty())
{
printf("peek=>%d",deque[front]);
}
return data;
}

int isempty()
{
if(rear==-1||front-1)
{
return 1;
}
return 0;
}

int enqueuerear(int data)
{

if(!isfull())
{

if(front==-1)
{
 deque[++front,++rear]=data;
}
else if(rear==MAXSIZE-1)
rear=0;
else
rear=rear+1;
return printf("%d  ",deque[rear]=data);
}
else
return 0;
}
int enqueuefront(int data)
{
if(!isfull())
{
if(front==-1&&rear==-1)
{
deque[++front]=data;
rear=front;
}
else if(rear==0)
{
front=MAXSIZE-1;
deque[front]=data;
}
else
{
front=front-1;
deque[front]=data;
}
return 1;
}
else
return 0;
}

int dequefront()
{
if(!isempty())
{
if(front==MAXSIZE-1)
{
front=0;
}
else
front;
return (deque[front++]);

//return ;
}
}
 int dequerear()
{
int data;
if(!isempty())
{
data=deque[rear];
if(rear==0)
{
rear=MAXSIZE-1;
}
else if(front==rear)
{
front=-1;
rear=-1;
}
else
rear--;
}
return data;
}

int isfull()
{
return (rear==-1&&front==0||front==rear+1?1:0);
}

void main()
{
clrscr();
enqueuerear(32);
enqueuerear(33);
//enqueuerear(45);
//enqueuerear(10);

printf("%d->dequefront",dequefront());
dequerear();
peek();
getch();
}





















































































































































































































































































































































































































































































































































































































































