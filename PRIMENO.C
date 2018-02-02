#include <stdio.h>

int main(void)
{
	int a,b,i,val;
	printf("enter the limits");
	scanf("%d,%d",&a,&b);
	for(i=a;i<=b/2;++i)
	{
	if(b%i==0)
	{
	val=1;
	}
	}
	if(val==0)
	{
		printf("%d",i);
	}
	return 0;
}
