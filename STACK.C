#include<stdio.h>
#define MAX_SIZE 20
char stack[MAX_SIZE]={'0'};
int top=-1;
char arr[MAX_SIZE]={'0'};
int arrsize=-1;

int isFull()
{
 if(top==MAX_SIZE-1)
 return 1;
 else
 return 0;
}

int isEmpty()
{
 if(top==-1)
 return 1;
 else
 return 0;
}

int push(char val)
{
 if(!isFull())
 {
 stack[++top]=val;
 return 1;
 }
 return 0;
}

char pop()
{
  char val=NULL;
 if(!isEmpty())
 {
   val=stack[top--];
 }
 return val;
}
char pull()
{
 char val=NULL;
 if(!isEmpty())
 {
  val=stack[top];
 }
 return val;
}
int operatr(char opt)
  {
  if(opt=='+' || opt=='-' || opt=='*' || opt=='/')
    return 1;
    else
    return 0;
  }

int  operand(char oper)
{
 if((oper>=97 && oper<=122)||(oper>=65 && oper<=90))
 return 1;
 else
 return 0;
}

int parRight(char par)
{
 if(par=='(')
 return 1;
 else
 return 0;
}

int parLeft(char par)
{
 if(par==')')
 return 1;
 else
 return 0;
}

int precedence(char oper)
{
  switch(oper)
  {
    case '/':
    case '*':
    return 3;
    case '+':
    case '-':
    return 2;
    case '(':
    return 1;
  }
}

void show()
{
 int i;
 for(i=0;i<=arrsize;i++)
 {
  printf("%c",arr[i]);
 }
}
void stackShow()
{
 int i;
 for(i=0;i<=top;i++)
 {
  printf("%c",stack[i]);
 }
}

int main()
{
char err[MAX_SIZE]={'\0'};
 int i=0;
 clrscr();
 printf("Enter errression : ");
 gets(err);
 if(!parRight(err[i]))
 {
   push('(');
 }
 for(;err[i]!=NULL;i++)
 {
 //   printf("%c",err[i]);
   if(operatr(err[i]))
   {
      if(precedence(err[i])<=precedence(pull()))
      {
       arr[++arrsize]=pop();
       push(err[i]);
      }
      else
      {
        push(err[i]);
      }
   }
   else if(operand(err[i]))
   {
     arr[++arrsize]=err[i];
   }
   else if(parRight(err[i]))
   {
      push(err[i]);
   }
     else if(parLeft(err[i]))
   {
     while(pull()!='(')
     {
       arr[++arrsize]=pop();
     }
     pop();
   }
 }
 show();
 printf("\n");
 stackShow();

 getch();
}
