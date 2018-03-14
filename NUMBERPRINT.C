#include <stdio.h>

int main(void) {
int i,number=0;
char str[50];
printf("enter a string");
scanf("%[^\n]s",&str);
for(i=0;str[i]!=0;i++)
{
	if(str[i]>'1' && str[i]<<'9')
	{
	++number;
	}
}
	printf("%d",i);

	return 0;
}
