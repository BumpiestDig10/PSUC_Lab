#include<stdio.h>
int main()
{
    int num;
    printf("Enter an integer: ");
    scanf("%d", &num);
    printf("Absolute value of %d is: ", num);

    if(num >= 0)
    {
        printf("%d\n", num);
    }
    else
    {
        printf("%d\n", -num);
    }
    
    return 0;
}