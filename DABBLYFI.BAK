#include<stdio.h>
#include<conio.h>
struct node
{
int data;
struct node *next;
struct node *prev;
} *head=NULL, *temp=NULL;

int deletenthpos()
{
struct node *start=head;
int countPos=0;  int pos;
printf("\nenter the  number or posgition");
scanf("%d",&pos);
while(++countPos<pos-1)
start=start->next;
temp=start->next;
start->next=temp->next;
temp->next->prev=start;
temp->prev=NULL;
free(temp);
return 1;
}


int deletefirstpos()
{
temp=head;
head->prev=NULL;
head=head->next;
temp->next=NULL;
free(temp);
return 1;
}

int deletelastpos()
{
struct node*start=head;
while(start->next->next!=NULL)
start=start->next;
start->next=NULL;
start->prev=NULL;
free(temp);
return 1;
}

int addnthpos(int data,int pos)
{
struct node *start=head;
int countPos=0;
temp=(struct node*)malloc(sizeof(struct node*));
while(++countPos<pos-1&&head!=NULL)
start=start->next;
temp->data=data;
temp->next=start->next;
start->next=temp;
temp->prev=start;
return 1;
}

int addfirstpos(int data)
{
temp=(struct node*)malloc(sizeof(struct node));

temp->data=data;
temp->next=NULL;
temp->prev=NULL;
head=temp;
return 1;
}
int addlastpos(int data)
{
struct node *start=head;
temp=(struct node*)malloc(sizeof(struct node));
temp->data=data;
start->prev=NULL;
temp->next=NULL;
while(start->next!=NULL)
start=start->next;
start->next=temp;
temp->prev=start;

return 1;
//printf("%d",temp);
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
head->data=20;
head->next=NULL;
addfirstpos(78);
addlastpos(20);
addlastpos(30);
addlastpos(40);
addlastpos(50);
addlastpos(40);
printdata();
//deletefirstpos();
//deletelastpos();
deletenthpos();
//addnthpos(33,2);
printdata();
getch();
}

















































































































































































































































































































































































































































































































































































































































