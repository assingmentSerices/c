void main()
{
char s[17]="0000000000000000";
int i=15,r,n;
clrscr();
printf("enter the number");
scanf("%d",&n);
while(n!=0)
{
if(n>0)
r=n%10;
n=n/10;
r=s[i]+r;
i--;
}
printf("%s",s);
getch();
}
