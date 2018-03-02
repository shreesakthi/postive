#include <stdio.h>

int main(void) {
	int i,n[20],m,l;
	printf("enter the number of elements");
	scanf("%d",&m);
	printf("\n enter the elements");
	for(i=0;i<=m;i++)
	{
		scanf("%d",&n[i]);
	}
	l=n[0];
	for(i=0;i<m;i++)
	{
		if(l<n[i])
		{
			l=n[i];
		}
	}
	printf("\nthe maximum value is %d",l);
	return 0;
}
