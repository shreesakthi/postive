#include <stdio.h>
#include <string.h>
main()
{
      char st[50];
      int i,p,x,start;
      printf("PLEASE INPUT ANY STRING\n");
      gets(st);
      printf("\n\nFROM WHERE YOU WANT TO EXTRACT\n");
      scanf("%d",&start);
      printf("\nINPUT HOW MUCH YOU WANT TO EXTRACT FROM THE STRING\n");
      scanf("%d",&x);
 
      printf("\nTHE EXTRACTED STRING :\n");
 
      for (i=start; i<=x; i++)
 
      printf("%c",st[i]);
 
  return 0;
}
