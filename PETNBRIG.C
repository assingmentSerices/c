int main()
{
int i,j,n;
clrscr(r);
printf("enter a no");
scanf("%d",&n);
for(i=1;i<=n;i++)
 {
  for(j=1;j<=n;j++)
  {

   if(i>=j)
   printf("*");
   else
     printf(" ");
   }
   for(j=n;j>=1;j--)
   {
    if(i>=j)
   printf("*");
   else
     printf(" ");
 //  printf("*");
   }
     printf("\n");
      }
      

     getch();
return 0;   }
