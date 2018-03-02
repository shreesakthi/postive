#include <stdio.h>

int main(void) {
	int n;
	printf("enter a number");
	scanf("%d",&n);
	if((n%2)==0)
	{
		printf("the nearby even number is %d",n+2);
	}
	else if((n%2)!=0)
	{
		printf("\nthe nearby even number is %d",n+1);
	}
	return 0;
}
