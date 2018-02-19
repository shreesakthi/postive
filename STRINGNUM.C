#include <stdio.h>

int main(void) {
	int n,i;
	char str;
	printf("enter a string");
	scanf("%s",&str);
	printf("\nenter the number");
	scanf("%d",&n);
	for(i=0;i<=n;i++)
	{
		printf("%s",str);
		printf("\n");
	}
	return 0;
}
