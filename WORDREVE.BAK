int checkchar(char arr[],char ch,int i)
{
while(i>=0)
{
if(arr[i]==ch)
{
return 0;
}
i--;
}
return 1;
}
int countchar(char arr[],char ch,int i)
{
int count=0;
while(i<strlen(arr))
{
 if(arr[i]=ch)
 {
 count++;
 }
 i++;
 }
 return count;
 }
 void main()
 {
 char arr[]="chetan kushwah";
 int i,count=0;
 clrscr();
 for(i=0;i<strlen(arr);i++)
 {
 if(checkchar(arr,arr[i],i-1))
 {
 count=countchar(arr,arr[i],i);
 printf("%c ->%d\n",arr[i],count);
 }
 }
 getch();
 }





