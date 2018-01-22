#include<stdio.h>
int main()
{
int n[20],N,k,i,sum=0;
printf("enter the 2 numbers");
scanf("%d %d",&N,&k);
printf("enter the no. of elements");
scanf("%d",&n);
for(i=0;i<=n;i++)
{
	printf("enter the elements:");
	scanf("%d",&n[i]);
}
for(i=0;i<=k;i++)
       {
         sum+=i;
       }
       printf("the sum is %d",sum);
       return 0;
       }
