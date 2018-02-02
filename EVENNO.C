#include<stdio.h>
int main()
{
int a,b,i,rem;
printf("enter the limits");
scanf("%d,%d",&a,&b);
for(i=a,i<=b,++i)
{
rem=i%2;
if(rem==0)
{
printf("\n%d",rem);
}
}
return 0;
}
