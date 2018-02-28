#include <stdio.h>

int main(void) {
int n,a[10],avg ,i,sum=0;
printf("enter the number of elements:");
scanf("%d",&n);
printf("\nenter the elements");
for(i=0;i<n;i++)
{
	scanf("%d",&a[i]);
sum=sum+a[i];
}
avg=sum/n;
printf("\nthe average is %d",avg);
	return 0;
}
