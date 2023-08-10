#include<stdio.h>
#include<conio.h>
struct node
{
int data;
struct node *next;
}*head=NULL,*temp=NULL, *prev=NULL;

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
int addAtFirstPos(int data)
{
temp=(struct node*)malloc(sizeof(struct node));
temp->data=data;
temp->next=head;
head=temp;
return 1;
}
 int addAtNthPos(int data,int pos)
{
struct node *start=head;
int countPos=0;
temp=(struct node*)malloc(sizeof(struct node));
while(++countPos<pos-1)
start=start->next;
temp->data=data;
temp->next=start->next;
temp->next=temp;

return 1;
}
int deleteAtNthPos()
{
struct node *start=head;
int countPos=0;int pos;
printf("\nenter the  number or posgition");
scanf("%d",&pos);
while(++countPos<pos-1)
start=start->next;
temp=start->next;
temp->next=temp->next;
temp->next=NULL;
free(temp);
return 1;
}


int deleteAtFirstPos()
{
temp=head;
head=head->next;
temp->next=NULL;
free(temp);
return 1;
}

int deleteAtLastPos()
{
struct node*start=head;
while(start->next->next!=NULL)
start=start->next;
start->next=NULL;
free(temp);
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
void rev()
{
struct node *next=NULL;
while(temp!=NULL)
{
next=temp->next;
temp->next=prev;
prev=temp;
temp=next;
}
head =prev;
}


/*struct node* Grouprev(struct node* head,int k)
{
 struct node* current=NULL;
 struct node* prev=NULL;
 struct node* start=head;
 int count=0;
 if(head==NULL)
 return NULL;
 while(start&&count<k)
 {
 current=start->next;
 start->next=prev;
 prev=start;
 start=current;
 current++;
 }
  if(current!=NULL)
  head->next=revGroup(start,k) ;
  return prev;

} */
 void midvalue ()
 {
 struct node *p1=head;
 struct node *p2=head;
 if(head!=NULL)
 {
 while(p2!=NULL&&p2->next!=NULL)
 {
 p2=p2->next->next;
 p1=p1->next;
 }
 printf("%d\n mid value",p1->data);
 }
 }

void main()
{

clrscr();
head=(struct node*)malloc(sizeof(struct node));
head->data=10;
head->next=NULL;

addAtFirstPos(11);
addAtFirstPos(23);
addAtFirstPos(44);
//addAtLastPos(43);
//addAtLastPos(67);
//addAtNthPos(4,44);
//deleteAtFirstPos(5);
//deleteAtFirstPos(19);
//deleteAtNthPos(33,3);
//deleteAtLastPos(60);
//deleteAtLastPos(90);
 // Grouprev(head);
  rev();
  midvalue();
printdata();
getch();
}


