#include<stdio.h>
#include<math.h>

int main()
{
    int binary, digits = 0;
    int decimal;

    /*printf("Number of digits in binary number: ");
    scanf("%d", &digits);*/

    printf("Enter a binary number: ");
    scanf("%d", &binary);
    //printf("\n");
    decimal = 0;

    int temp = binary;

    while(temp != 0)
    {
        digits = digits + 1;
        temp = temp/10;
    }
    //printf("%d\n", digits);

    for(int i = 1; i <= digits; i++)
    {
        decimal = decimal + (binary%10)*pow(2,i-1);
        binary = binary/10;
    }
    printf("Given binary in decimal: %d\n", decimal);
}