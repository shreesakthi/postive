#include<stdio.h>
int main()
{
int a,b,c;
printf("enter the base value");
scanf("%d",&a);
printf("enter the exponent value");
scanf("%d",&b);
while(b!=0)
{
c*=a;
--b;
}
printf("\n answer=%d",c);
return 0;
}
