#include <stdio.h>

int main(void) {
	int n,a,b;
	printf("enter the range");
	scanf("%d,%d",&a,&b);
	printf("\nenter a number");
	scanf("%d",&n);
	if(n>=a && n<=b)
	{
	printf("\nyes");
	}
	else
	{
		printf("\nno");
	}
	return 0;
}
