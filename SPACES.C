#include <stdio.h>
int main(void) {
int i,spaces=0;
char a[30];
printf("enter a string");
scanf("%c",&a);
for(i=0;a[i]!=0;i++)
{
	if(a[i]==' ')
	{
		spaces++;
	}
	i++;
}
printf("\nthe total number of spaces is %d",spaces++);
	return 0;
}
