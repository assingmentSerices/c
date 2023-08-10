#include<stdio.h>
#include<conio.h>
struct node{
int data;
struct node *next;
}*top=NULL,*temp=NULL;
int empty(){
return top==NULL?1:0;
}

int isFull(){
return temp==NULL?1:0;
}

int push(int data)
{
temp=(struct node*)malloc(sizeof(struct node));
if(!isFull())
{
temp->data=data;
temp->next=top;
top=temp;
//printf("push");
return 1;
}
return 0;
}

int pop()
{
int data=-1;
if(!empty())
{
data=top->data;
temp=top;
top=top;
top=top->next;
temp->next=NULL;
free(temp);
//printf("pop");
}
return data;
}

int peek()
{
int data=-1;
if(!isFull())
data=top->data;
return data;
}


void main(){
clrscr();
push(10);
push(30);
push(40);
push(20);
push(44);
printf("%d->",pop());
printf("%d->",pop());
printf("%d->",pop());
printf("%d->",pop());
printf("%d->",pop());
printf("%d->",pop());
peek();
getch();
}