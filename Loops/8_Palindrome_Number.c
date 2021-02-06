#include <stdio.h>
int main()
{
    int number, num, rev, rem;      //number is user input
    rev = 0;
    printf("Enter a number: ");
    scanf("%d", &number);
    num = number;

    while(num != 0)
    {
        rem = num%10;
        rev = rev*10 + rem;
        num = num/10;
    }

    if(rev == number)
    {
        printf("%d is a palindrome.\n", number);
    }
    else
    {
        printf("%d is not a palindrome.\n", number);
    }

    return 0;
}