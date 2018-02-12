#include <stdio.h>

int main(void) {
int i,num=0;
char str[50];
printf("enter a string");
scanf("%[^\n]c",&str);
for(i=0;str[i]!=0;i++)
{
	if(str[i]>='0' && str[i]<='9')
	{
		++num;
	}
}
printf("\nthe total numbers are %d",num);
	return 0;
}
