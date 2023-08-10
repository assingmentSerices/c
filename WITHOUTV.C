void main()
{
clrscr();
*(int*)20=0;
printf("enter no you want to add");
scanf("%d",100);
for(;1;)
{
scanf("%d",10);
*(int*)20=(*(int*)20)+(*(int*)10);
*(int*)100=*(int*)100-1;
if(*(int*)100==0)
break;
}
printf("sum=%d",*(int*)20);
getch();
}