#include <stdio.h>
int main()
{
    int num;
    printf("Enter an integer: ");
    scanf("%d", &num);
    
    if(num%2 == 0)
    {
        printf("It is an even number.\n");
    }
    else
    {
        printf("It is an odd number.\n");
    }
    
    return 0;
}