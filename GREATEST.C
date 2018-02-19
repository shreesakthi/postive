#include <stdio.h>

int main(void)
{
	int i,a,n[20],max;
	printf("enter the number of elements");
	scanf("%d",&a);
	printf("\nenter the list of numbers");
	for(i=0;i<=a;i++)
	{
		scanf("%d",&n[i]);
	}
	max=n[0];
	for(i=0;i<a;i++)
	{
		if(max<n[i])
		{
			max=n[i];
		}
	}
	printf("\nthe largest number is %d",max);
	return 0;
}
