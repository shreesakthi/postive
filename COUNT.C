#include <stdio.h>

int main(void) {
	int n,count=0;
	printf("enter a number");
	scanf("%d",&n);
	while(n!=0)
	{
		n/=10;
	++count;
	}

	printf("the number of digits are %d",count);
	return 0;
}
