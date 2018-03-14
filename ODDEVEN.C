#include <stdio.h>
void printArray(int arr[], int len);
int main(void) {
	int i,str[20],odd[20],even[20];
	int evencount,oddcount;
	printf("enter a string");
	scanf("%s",&str[i]);
	evencount=0;
	oddcount=0;
	for(i=0;i<=str[i];i++)
	{
		if(str[i] & 1)
	{
		odd[oddcount] = str[i];
		oddcount++;
	}
	else
	{
		even[evencount] = str[i];
		evencount++;
	}
	}
	  printf("\nElements of even array: \n",evencount);

    printf("\nElements of odd array: \n",oddcount);
  
    return 0;
}

void printArray(int arr[], int len)
{
    int i;
    printf("Elements in the array: ");
    for(i=0; i<len; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}


