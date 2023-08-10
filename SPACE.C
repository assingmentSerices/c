 #include<stdio.h>

void main()
{
 char str[20]="my name is chetan";
 int count=0,i,end;
 clrscr();
 end=strlen(str)-1;

 for(i=0;i<end;i++)
 {
 if(str[i]==' ')
 count++;
 }
 printf("word is %d",count+1);



 getch();
 }