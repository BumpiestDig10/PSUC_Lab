#include<stdio.h>
#include<math.h>
int main()
{
    int n;
    printf("Enter an integer: ");
    scanf("%d", &n);

    if(n <= 0)
    {
        printf("%d is not a prime number.\n", n);
        return 0;
    }

    if(n == 1)
    {
        printf("%d is neither prime nor composite.\n", n);
        return 0;
    }

    for(int i = 2; i <= sqrt(n); i++)
    {
        if(n%i == 0)
        {
            printf("%d is not a prime number.\n", n);
            return 0;
        }
    }
    printf("%d is a prime number.\n", n);

    return 0;
}