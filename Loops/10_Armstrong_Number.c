#include<stdio.h>
#include<math.h>
int main()
{
    int number, sum = 0, power, remainder;
    printf("Enter a number: ");
    scanf("%d", &number);

    int num, i=0;       //num to check number of places
    num = number;
    while(num !=0)
    {
        i = i+1;
        num = num/10;
    }

    num = number;
    while(num != 0)
    {
        remainder = num%10;
        power = pow(remainder,i);
        sum = sum + power;
        num = num/10;
    }

    if(sum == number)
    {
        printf("%d is an armstrong number.\n", number);
    }
    else
    {
        printf("%d is not an armstrong number.\n", number);
    }
    
    return 0;
}