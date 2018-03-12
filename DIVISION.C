#include <stdio.h>

int main(void) {
	int a,b,c,d,e,f;
	printf("enter two numbers for division");
	scanf("%d %d",&a,&b);
	printf("\nenter two numbers for modulo division");
	scanf("%d %d",&c,&d);
	e=a/b;
	f=c%d;
	printf("\nthe quoitent is %d",e);
	printf("\n the reminder is %d",f);
	return 0;
}
