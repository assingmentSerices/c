#include<stdio.h>
#include<conio.h>
struct node
{
int data;
struct node *next;

}*tail=NULL,*temp=NULL;

int addAtFirstPos(int data)
{
   temp=(struct node*)malloc(sizeof(struct node));
   temp->data=data;
   temp->next=tail;
   temp->next=tail->next;
   tail->next=temp;
   return 1;
}

void printdata()
{
 struct node*start=tail;
 do
 {
 printf("%d->",start->data);
 start=start->next;
 } while(start!=tail);
 printf("NULL");
}

void main()
{
int data;
tail=(struct node*)malloc(sizeof(struct node)) ;
tail->data=10;
tail->next=NULL;
addAtFirstPos(20);
addAtFirstPos(30);
addAtFirstPos(40);
addAtFirstPos(50);
addAtFirstPos(60);
printdata();
getch();
}






