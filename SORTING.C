#include  <stdio.h>
 int main()
{
    int numbers[0],n, i ,j ,temp;
		printf("Enter the Number : ");
        scanf("%d", &numbers[n]);
    for (i = 0; i < n; ++i)
    {
        for (j = i + 1; j < n; ++j)
        {
            if (numbers[i] > numbers[j])
            {
                temp =  numbers[i];
                numbers[i] = numbers[j];
                numbers[j] = temp;
            }
        }
    }
    
    printf("Sorting Order Array: \n");
    for (i = 0; i < n; ++i)
        printf("%d\n", numbers[i]);
        
    return 0;
}
