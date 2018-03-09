#include <stdio.h>

int main(void) {
	char str,a,e,i,o,u,z;
	int flag;
	printf("enter a string");
	scanf("%s",&str);
	for(i=a;i<=z;i++)
	{
		if(str!='a' && str!='e' && str!='i' && str!='o' && str!='u')
		{
			flag=1;
		}
	}
	if(flag==0)
	{
		printf("yes");
	}
	else
	{
		printf("no");
	}
	return 0;
}
