#include<stdio.h>
int main()
{
    int n;
    printf("Enter an integer: ");
    scanf("%d", &n);

    for(; n >= 0; n--)
    {
        if(n%2 != 0)
        {
            printf("%d  ", n);
            n = n-1;
        }
    }
    printf("\n");

    return 0;
}