#include <stdio.h>

int main(void) {
	int a,b,c;
	printf("enter a numbers");
	scanf("%d",&a);
	printf("enter another number");
	scanf("%d",&b);
	c=a-b;
	if(c%2==0)
	{
		printf("\nthe difference is even");
	}
	else
	{
		printf("\nthe difference is odd ");
	}
	return 0;
}
