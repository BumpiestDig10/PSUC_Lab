#include<stdio.h>
#include<math.h>

int Prime(int x);

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
    else if(n == 1)
    {
        printf("%d is neither prime nor composite.\n", n);
        return 0;
    }
    else if(Prime(n) == 0)
    {
        printf("%d is not a prime number.\n\n", n);
    }
    else
    {
        printf("%d is a prime number.\n\n", n);
    }

    printf("All prime number till %d: ", n);
    for(int i = 2; i <= n; i++)
    {
        if(Prime(i) != 0)
        {
            printf("%d  ", i);
        }
    }
    printf("\n");
    
    return 0;
}

int Prime(int x)
{
    for(int i = 2; i <= sqrt(x); i++)
    {
        if(x % i == 0)
        {
            return 0;
        }
    }

    return x;
}