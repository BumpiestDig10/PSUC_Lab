//Prints Armstrong numbers between 1-1000.
//Last number in the range is 407 (13th number).
#include<stdio.h>
#include <math.h>
int main()
{
    int count=1, n = 0;
    int i;

    printf("Please Enter the n to find nth Armstrong Number = ");
    scanf("%d",&n);
    for(i = 1; i <= 1000; i++)
    {
        int num=i, rem, digit=0, sum=0;

        num = i;

        // Find total digits in num
        digit = (int) log10(num) + 1;

        // Calculate sum of power of digits
        while(num > 0)
        {
            rem = num % 10;
            sum = sum + pow(rem,digit);
            num = num / 10;
        }

        // Check for Armstrong number
        if(i == sum)
        {
            if(count==n)
            {
                printf("%d\n",i);
                break;
            }
            else
            {
                count++;
            }
        }
    }
    return 0;
}