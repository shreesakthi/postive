#include <stdio.h>

int main(void) {
	int i,n;
	printf("enter a number");
	scanf("%d",&n);
	for(i=1;i<=n;++i)
	{
		if((n%i) == 0)
		{
			printf("\nthe factors are %d ",i);
		}
	}
	return 0;
}

