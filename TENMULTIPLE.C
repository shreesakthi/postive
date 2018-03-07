#include <stdio.h>

int main(void) {
	int n;
	printf("enter a number");
	scanf("%d",&n);
	if (n % 10)
	{
    n = n + (10 - n % 10);
	}
	printf("%d",n);
	return 0;
}
