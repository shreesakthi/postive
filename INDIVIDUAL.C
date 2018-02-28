#include <stdio.h>

int main(void) {
	int i=1,n=0,a;
	printf("enter a number");
	scanf("%d",&n);
	while(n>=1)
	{
	a=n%10;	
	printf("\nthe individual digits are %d",a);
	n=n/10;
	i++;
	}
	return 0;
}
