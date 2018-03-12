#include <stdio.h>

int main(void) {
	int a,b,c;
	printf("enter a number");
	scanf("%d",&a);
    printf("enter another number");
	scanf("%d",&b);
	c=a*b;
	if(a==b)
	{
		printf("yes");
	}
	else
	{
		printf("no");
	}
	return 0;
}
