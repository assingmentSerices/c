#include<stdio.h>
#include<conio.h>
struct node
{
int data;
struct node *next;
}*head=NULL,*temp=NULL;

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
 menu();
}



int menu()
{
int choice;
printf("\n1.add first node \n2 add last node \n3 add nth node \n4delete first node \n5 delete last node \n6 delete nth pos ");
printf("\nenter your choice");
scanf("%d",&choice);
switch(choice)
{
case 1:
addAtFirstPos(6);
printdata();
break;

case 2:
addAtLastPos(20);
addAtLastPos(40);
addAtLastPos(30);
addAtLastPos(60);
addAtLastPos(80);
addAtLastPos(90);
addAtLastPos(70);
printdata();
break;

case 3:
addAtNthPos(166,3);
printdata();
break;

case 4:
deleteAtFirstPos();
printdata();
break;

case 5:
deleteAtLastPos();
printdata();
break;

case 6:
deleteAtNthPos();
printdata();
break;

case 7:
exit();
default :
{
printf("\n invalid choice");
getch();
}
}
}

void main()
{

clrscr();
head=(struct node*)malloc(sizeof(struct node)) ;
head->data=10;

head->next=NULL;
menu();/*
addAtFirstPos(11);
addAtFirstPos(23);
addAtLastPos(43);
addAtLastPos(67);
addAtNthPos(4,44);
deleteFirstPos(5);
deleteFirstPos(19);
deleteAtNthPos(33,3);
deleteAtLastPos(60);
deleteAtLastPos(90);

printdata();
*/getch();
}