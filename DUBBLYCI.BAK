#include<stdio.h>
#include<conio.h>
struct node
{
int data;
struct node *next;
struct node *prev;

}*tail=NULL,*temp=NULL;
int deletelastpos()
{   struct node *start=temp;
   temp=start->prev;
   temp->next=start->next;
   start->next->prev=temp;
   start->prev=NULL;
    start->next=NULL;
   tail=temp;
   temp=start;
   free(temp);
   return 1;
}

int addnthpos(int pos,int data)
{
struct node *temp;
int countPos=0;
temp=(struct node*)malloc(sizeof(struct node*));
while(++countPos<pos-1&&temp!=tail->next)
tail=tail->next;
tail->next=temp;
temp->data=data;
temp->prev=tail;
temp=temp->next;
temp->next=tail->prev;

return 1;
}

int deletefirstpos()
{
struct node *temp=tail;

temp=tail->next;
tail->next=temp->next;
temp->next->prev=tail;
temp->next=NULL;
temp->prev=NULL;
free(temp);
return 1;
}

/*int deleteAtLastPos(int data)
{
   struct node*start=tail->next;
   temp=(struct node*)malloc(sizeof(struct node));
=
   while(start->next!=tail)
   {
   start=start->next;
   }
   temp=start->next;
   tail=start;
   start->next=temp->next;
   temp->next=NULL;
   free(temp);

} */


int addAtFirstPos(int data)
{
struct node *temp;
   temp=(struct node*)malloc(sizeof(struct node));
   temp->data=data;
   temp->next=tail->next;
   tail->next=temp;
   temp->prev=tail->next;
   return 1;
}

int addAtLastPos(int data)
{
struct node*temp; struct node *start;
temp=(struct node*)malloc(sizeof(struct node));
while(start->next!=NULL)
temp->data=data;
temp->prev=NULL;
temp->next=tail->next;
tail->next=temp;

tail=temp;
//printf("%d",tail->data);
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
addAtFirstPos(20);
addAtFirstPos(30);
addAtFirstPos(40);
//addAtLastPos(50);
//addAtLastPos(60);
//addAtLastPos(70);
//de
//addnthpos(33,3);
deletefirstpos();
printdata();

getch();
}





