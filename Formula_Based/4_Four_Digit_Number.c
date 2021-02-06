#include<stdio.h>
int main()
{
    int number;
    int temp;
    int sum = 0;
    printf("Enter a four digit number: ");
    scanf("%d", &number);

    temp = number;
    sum = sum + (temp%10);
    temp = temp/10;
    sum = sum + (temp%10);
    temp = temp/10;
    sum = sum + (temp%10);
    temp = temp/10;
    sum = sum + (temp%10);
    
    printf("Sum of the digits: %d\n", sum);

    return 0;
}