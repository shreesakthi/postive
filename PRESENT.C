#include <stdio.h>

int main(void) {
	int a,b,c;
	printf("enter a number");
	scanf("%d",&a);
	printf("\nenter the starting limit");
	scanf("%d",&b);
	printf("\nenter the last limit");
	scanf("%d",&c);
	if(a>b && a<c)
	{
		printf("yes");
	}
	else
	{
		printf("no");
	}
	return 0;
}
