#include <stdio.h>

int main(void) {
	int n,i,val=0;
	printf("enter a number");
	scanf("%d",&n);
	for(i=2;i<=n/2;i++)
	{
	if(n%i==0)	
	
	{
	val=1;
	break;
	}
	}
	if(val==0)
	{
		printf("prime number");
	}
	else
	{
		printf("not prime number");
	}
	return 0;
}
