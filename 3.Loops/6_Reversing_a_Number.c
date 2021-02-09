#include<stdio.h>
int main()
{
    int number, reverse, remainder;
    reverse = 0;
    printf("Enter a number: ");
    scanf("%d", &number);

    while(number != 0)
    {
        remainder = number%10;
        reverse = reverse*10 + remainder;
        number = number/10;
    }
    printf("%d\n", reverse);

    return 0;
}