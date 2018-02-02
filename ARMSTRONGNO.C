#include <stdio.h>
int main()
{
    int a=150,b=160,i, rem, result = 0;
    printf("enter the limits");
    scanf("%d,%d",&a,&b);
for(i=a;i<=b;i++)
{
    while (i!= 0)
    {
        rem= i%10;
        result += rem*rem*rem;
     i= 10;
    }
    if(result ==i)
        printf("%d",i);
}
    return 0;
}
