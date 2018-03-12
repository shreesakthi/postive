#include <stdio.h>

int main(){
	char str[100];
	int i;
	
	printf("Enter a string: ");
scanf("%s",&str[i]);
	printf("ASCII is: ");
	for(i=0; str[i]!='\0'; i++)
	{
		printf("%02X ",str[i]);
	}
	printf("\n");
	
	return 0;
}
