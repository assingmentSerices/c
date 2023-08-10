void display(int a)
{
printf(" %d",a);
if(--a)
display(a)
printf(" %d",a);
}
void main()
{
display(3)
}