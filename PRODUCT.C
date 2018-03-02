#include <stdio.h>

int main(void) {
int n,m,a;
printf("enter two numbers");
scanf("%d,%d",&n,&m);
a==(n*m);
if((a%2)==0)
{
	printf("\nthe product is even");
}
else
{
	printf("\nthe product is odd");
}
	return 0;
}
