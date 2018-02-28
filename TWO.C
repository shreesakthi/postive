#include <stdio.h>

int main(void) {
	int n;
	printf("enter a number");
	scanf("%d",&n);
	if (n == 0)
   {
   	printf("no");
   }
  while (n != 1)
  {
      if (n%2 != 0)
         printf("no");
      n = n/2;
  }
  printf("yes");
	return 0;
}
