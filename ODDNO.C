#include<stdio.h>
#include<conio.h>
void main()
{
int num,a,b;
clrscr();
printf("enter the two numbers");
scanf("%d,%d",&a,&b);
for(num=a;num<=b;num++)
{
if(num/2==0)
{
printf("%d",num);
}
getch();
}
}
