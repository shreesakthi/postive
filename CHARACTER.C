#include <stdio.h>

int main(void) {
	int i,character;
	char string[10];
		character=i=0;
	printf("enter a string");
gets(string);
	while(string[i]!=0)
	{
		if(string>'a' && string<'z')
		{
		character++;
		}
		i++;
	}
	printf("\nthe total number of characters is %d",character);
	return 0;
}
