#include <stdio.h>

int main(void) {
	char str1[20],str2[20] ,i,j;
	printf("enter the 1st string");
	scanf("%s",str1);
	printf("\nenter the 2nd string");
	scanf("%s",str2);
	for(i=0; str1[i]!='\0'; ++i);
	for(j=0; str2[j]!='\0'; ++j, ++i)
	{
	str1[i]=str2[j];	
	}
	
	str1[i]='\0';
	printf("\nthe concatenated string is %s",str1);
	return 0;
}
