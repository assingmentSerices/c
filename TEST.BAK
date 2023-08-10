#include<stdio.h>
#include<conio.h>
struct node
{
int data;

struct node *next;
//struct node *prev;
}*head=NULL,*temp=NULL;
int addFirstPos(int data)
{

temp=(struct  node*)malloc(sizeof(struct node));
temp->data=data;
temp->next=head;
head=temp;
return 1;
}

int addLastPos(int data)
{
struct node* start=head;
struct node* next;
temp=(struct node*)malloc(sizeof(struct node));
temp->data=data;
temp->next=NULL;
while(start->next!=NULL)
 {
start=start->next;
start->next=temp;
return 1;

}
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
void main()
{
clrscr();
head=(struct node*)malloc(sizeof(struct node));
head->data=10;
head->next=NULL;
//addFirstPos(78);
//addFirstPos(79);
//addFirstPos(80);
//addFirstPos(81);
//addFirstPos(10000);
//printdata();
addLastPos(100);
addLastPos(200);
addLastPos(300);
printdata();
getch();
}



