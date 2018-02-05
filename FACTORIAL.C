#include <stdio.h>
int main(void)
{
	int n,i,factorial=1;
	printf("enter a number");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		factorial=factorial*i;
	}
	printf("\nfactorial is %d",factorial);
	return 0;
}
