#include <stdio.h>
int main(void)
{
	int i,n,count=0,a=1;
	printf("enter the num\n");
	scanf("%d",&n);
	while(n!=1)
	{
		n=n/2;
		count++;
	}
	for(i=1;i<=count;i++)
	{
		a=a*2;
	}
	printf("%d",a);
	return 0;
}
