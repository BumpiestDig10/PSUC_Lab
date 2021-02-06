#include<stdio.h>
int main()
{
    int n, sum;
    printf("Enter an integer: ");
    scanf("%d", &n);
    sum = 0;

    for(int i = 0; i <= n; i++)
    {
        //printf("%d + %d = ", i, sum);
        sum = sum + i;
        //printf("%d\n", sum);
    }
    printf("Sum of first %d natural numbers: %d\n", n, sum);

    return 0;
}