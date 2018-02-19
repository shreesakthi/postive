#include <stdio.h>

int main(void) {
	int i,others;
	char str,a,z;
	others=0;
	printf("enter a string");
	scanf("%[^\n]c",&str);
	for(i=0;str!=0;i++)
	{
		if(str<1 && str>9)
		{
			others++;
		}
		if(str<a && str>z)
		{
			others++;
		}
	}
	printf("the  number of special characters are %d",others);
	return 0;
}
