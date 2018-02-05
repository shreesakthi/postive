#include <stdio.h>

int main(void)
{
int a[10],i,n,max;
printf("enter an element");
scanf("%d",&n);
printf("\nenter the array elements");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
max=a[0];
for(i=1;i<n;i++)
{
max=a[i];
}
printf("\nmaximum no. is %d",max);
	return 0;
}
