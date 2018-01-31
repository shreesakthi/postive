#include <stdio.h>
int main()
{
    int n, a= 0, rem,b;
 printf("Enter an integer: ");
    scanf("%d", &n);
originalInteger = n;
    while( n!=0 )
    {
        remainder = n%10;
        a = a*10 + rem;
        n /= 10;
    }
    if (originalInteger == a)
        printf("%d is a palindrome", b);
    else
        printf("%d is not a palindrome", b);
    return 0;
}
