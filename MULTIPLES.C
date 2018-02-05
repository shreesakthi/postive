#include <stdio.h>

int main(void) {
	int n,i;
	printf("enter a number");
	scanf("%d",&n);
	for(i=1;i<=5;i++)
	{
		printf("\n %d",n*i);
	}
	return 0;
}
