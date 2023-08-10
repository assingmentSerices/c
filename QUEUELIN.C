#include<stdio.h>
#include<conio.h>
#define true 1
#define false 0
struct node{
int data;
struct node *next;
}*rear=NULL,*temp=NULL,*front=NULL;

int isempty()
{
return front==NULL?1:0;
}

int isfull(){
return rear==NULL?1:0;
}

int inqueue(int data)
{
temp=(struct node*)malloc(sizeof(struct node));
if(front==NULL||rear==NULL)
{
front=rear=temp;
temp->data=data;
temp->next=NULL;
}
if(!isfull())
{
temp->data=data;
temp->next=NULL;
rear->next=temp;
rear=temp;
return true;
}
else
return false;
}

int dequeue()
{
  int data=-1 ;
if(!isempty())
{
temp=front;
front=front->next;
temp->next=NULL;
data=temp->data;
free(temp);

}
return data;
}
int peek()
{
int data=-1;
if(!isempty())
data=front->data;
return data;
}
void display()
{
struct node*start=front;
while(start!=NULL)
{
printf("\n%d",start->data);
start=start->next;
}
printf("NULL");
}

void main(){
clrscr();
inqueue(10);
inqueue(30);
inqueue(40);
inqueue(20);
inqueue(44);
printf("%d->",dequeue());
//printf("%d->",dequeue());

display();
peek();
getch();
}



