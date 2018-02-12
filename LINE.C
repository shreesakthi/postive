#include <stdio.h>

int main(void) {
	int i,linecount=0;
	char ch;
	printf("enter a paragraph");
	scanf("%s",ch);
	while(ch!=0)
	{
		if(ch==' ')
		{
			linecount++;
		}
	}
	printf("\nthe number of lines is %d",linecount);
	return 0;
}
