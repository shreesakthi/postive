#include <stdio.h>
#include<string.h>
int main(void) 
{
	char a[100];
	int s;
	scanf("%s",&a);
	s=strlen(a);
	if(s%2==0)
	{
		a[s/2]='*';
		a[(s/2)-1]='*';
	}
	else
	{
		a[s/2]='*';
	}
	printf("%s",a);
	return 0;
}
