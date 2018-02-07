#include <stdio.h>

int main(void) {
	int a,b,c;
	printf("enter the minutes");
	scanf("%d",&a);
	b=a/60;
	c=a%60;
	printf("\n the time is %d hours and%d minutes",b,c);
	
	return 0;
}
