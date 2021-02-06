#include <stdio.h>
int main()
{
    int a, b;
    printf("Enter a number: ");
    scanf("%d", &a);
    printf("Enter another number: ");
    scanf("%d", &b);

    if(a > b)
    {
        if(a % b == 0)
        {
            printf("%d is a multiple of %d\n", a, b);
        }
        else
        {
            printf("%d is not a multiple of %d\n", a, b);
        }
    }
    else if(a < b)
    {
        if(b % a == 0)
        {
            printf("%d is a multiple of %d\n", b, a);
        }
        else
        {
            printf("%d is not a multiple of %d\n", b, a);
        }
    }
    else
    {
        printf("Both numbers are equal\n");
    }
    
    return 0;
}