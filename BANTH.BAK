#include<stdio.h>
#include<conio.h>
struct node
{
int data;
struct node *next;
}*head=NULL,*temp=NULL;
int addAtNthPos(int data,int pos)
{
struct node *start=head;
int countPos=0;
temp=(struct node*)malloc(sizeof(struct node*));
while(++countPos<pos)
start=start->next;
temp->data=data;
temp->next=start->next;
start->next=temp;
return 1;
}


int addFirstPos(int data)
{
temp=(struct node*)malloc(sizeof(struct node));
temp->data=data;
temp->next=head;
head=temp;
return 1;
}

int addAtLastPos(int data)
{
struct node*start=head;
temp=(struct node*)malloc(sizeof(struct node));
temp->data=data;
temp->next=NULL;
while(start->next!=NULL)
start=start->next;
start->next=temp;
return 1;
}

void printdata()
{
 struct node*start=head;
 while(start!=NULL)
 {
 printf("%d->",start->data);
 start=start->next;
 }
 printf("NULL");
}

void main()
{
int data;
clrscr();
head=(struct node*)malloc(sizeof(struct node)) ;
head->data=10;
head->next=NULL;

addFirstPos(5);
addFirstPos(19);
addAtNthPos(33,3);
addAtLastPos(60);
addAtLastPos(90);

printdata();
getch();

}
