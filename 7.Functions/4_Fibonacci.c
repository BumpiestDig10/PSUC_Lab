#include <stdio.h>
int fibo(int);

int main()
{
    int num;
 
    printf("Enter the nth number in fibonacci series: ");
    scanf("%d", &num);

    if (num < 0)
    {
        printf("Invalid input!\n");
    }
    else
    {
        printf("The %d number in fibonacci series is %d\n\n", num, fibo(num));
        
        printf("Fibonacci series for %d terms:\n", num);
        for(int i = 1; i <= num; i++)
        {
            printf("%d  ", fibo(i));
        }
        printf("\n");
    }

    return 0;
}

int fibo(int num)
{
    if (num == 0)
    {
        return 0;
    }
    else if (num == 1)
    {
        return 1;
    }
    else
    {
        return(fibo(num - 1) + fibo(num - 2));
    }
}