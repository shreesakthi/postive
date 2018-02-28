#include <stdio.h>

int main(void) {
	int i=0,n=0,a,sum=0;
	printf("enter a number");
	scanf("%d",&n);
	while(n>=1)
	{
	a=n%10;	
	printf("\nthe individual digits are %d",a);
	n=n/10;
	i++;
	sum=sum+a;
	}
	printf("\nthe sum of the number is %d",sum);
	return 0;
}
