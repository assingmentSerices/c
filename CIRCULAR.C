#include<stdio.h>
#include<conio.h>
struct node
{
int data;
struct node *next;

}*tail=NULL,*temp=NULL;
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

int addAtFirstPos(int data)
{
struct node *temp;
   temp=(struct node*)malloc(sizeof(struct node));
   temp->data=data;

   temp->next=tail->next;
   tail->next=temp;

   return 1;
}
int addAtLastPos(int data)
{
struct node*temp;
temp=(struct node*)malloc(sizeof(struct node));
temp->data=data;
temp->next=NULL;
temp->next=tail->next;
tail->next=temp;
tail=temp;
printf("%d",tail->data);
return 1;
}


void printdata()
{
 struct node *temp=tail->next;
 while(temp!=tail)
 {
 printf("%d->",temp->data);
 temp=temp->next;
 }
 printf("NULL");
}

void main()
{
int data;
clrscr();
tail=(struct node*)malloc(sizeof(struct node)) ;
tail->data=13;
tail->next=tail;
//addAtFirstPos(20);
//addAtFirstPos(30);
//addAtFirstPos(40);
addAtLastPos(50);
addAtLastPos(60);
addAtLastPos(70);
printdata();
//printf("%d",tail->data);
getch();
}



