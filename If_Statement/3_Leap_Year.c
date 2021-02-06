#include <stdio.h>
int main()
{
    int year;
    printf("Enter a year: ");
    scanf("%d", &year);

    if(year%4 == 0)
    {
        if(year%100 == 0)
        {
            if(year%400 == 0)
            {
                printf("It is a leap year.\n");
            }
            else
            {
                printf("It is not a leap year.\n");
            }
        }
        else
        {
            printf("It is a leap year.\n");
        }
    }
    else
    {
        printf("It is not a leap year.\n");
    }
}