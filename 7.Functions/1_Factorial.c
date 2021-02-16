#include<stdio.h>

int factorial(int n);
int product = 1;

int main()
{
    int num;
    printf("Enter a positive integer: ");
    scanf("%d", &num);

    if(num < 0)
    {
        printf("Invalid Input!\n");
        return 0;
    }

    printf("%d! = ", num);
    factorial(num);
    printf("%d\n", product);

    return 0;
}

int factorial(int n)
{
    if(n == 0)
    {
        return product;
    }
    
    for(int i = 1; i <= n; i++)
    {
        product = product * i;
    }

    return product;
}