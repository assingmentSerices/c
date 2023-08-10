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
 printf("%d->\n",start->data);
 start=start->next;
 }
 printf("NULL");

}
void midvalue()
{
    struct node*p1=head;
    struct node*p2=head;
    int count=0;
    if(head!=NULL)
    {
    while(p1!=NULL&& p2->next!=NULL)
    {
    p2=p2->next->next;
    p1=p1->next;
    }
    printf("\nmid value%d",p1->data);
}
}
int dupvalue(struct node*head)
{
struct node *start=head;
struct node *next=NULL;
while(start->next!=NULL)
{
if(start->data==start->next->data)
{
next=start->next->next;
printf("\n%d disabel val",start->next->data);
free(start->next);
start->next=next;
}
else
{
start=start->next;
}
}
printf("%ddublicate\n",start->data);
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
 /*
void floidAlgo(struct node*head)
{
struct node *next=NULL;
struct node*p1=head;
struct nosde*p2=head;
int count=0;
while(p2!=NULL && p2->next!=NULL)
{
p1=p1->next;
p1=p2->next->next;
if(p1==p2)
{count=1;
break;
}     }
if(count)
{
p1=head;
while(p1->next!=p2->next)
{p1=p1->next;
p2=p2->next;
}
p2->next=NULL;
}
}  */
int Grouprev(struct node *head,int k)
{
if(!head)
{
return NULL;
}
else
{
struct node*temp=NULL;
struct node*start=head;
struct node*prev=NULL;
int count=0;
while(start!=NULL&&count<k)
{
temp=start->next;
start->next=prev;
prev=start;
start=temp;
count++;
}
if(temp!=NULL)
{
head->next=Grouprev(temp,k);
}
return prev;
}
}

void main()
{

clrscr();
head=(struct node*)malloc(sizeof(struct node));
head->data=10;
head->next=NULL;
//addAtFirstPos(33);
//addAtFirstPos(11);
//addAtFirstPos(23);
//addAtFirstPos(44);
//addAtFirstPos(33);
//addAtFirstPos(44);
printdata();
addAtLastPos(45);
addAtLastPos(43);
addAtLastPos(43);
//addAtLastPos(77);
//addAtNthPos(4,44);
//deleteAtFirstPos(5);
//deleteAtFirstPos();
//deleteAtNthPos(33,3);
//deleteAtLastPos(60);
//deleteAtLastPos(90);
//rev();
//head=Grouprev(head,2);
//floidAlgo(head);
//dupvalue(head);
//midvalue();
printdata();
getch();
}



