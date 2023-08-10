void main()
{
char s[]="qwertyuioplkjhgfdazxcvbnm";
int i;
int size=strlen(s);
clrscr();
for(i=0;i<size;i++)
{
 if(!(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'))

 {
 printf("\n%c",s[i]);
 }
 }
 getch();
 }



