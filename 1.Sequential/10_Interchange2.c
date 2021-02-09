#include<stdio.h>

int main()
{
    int var1, var2;

    printf("Enter variable 1: ");
    scanf("%d", &var1);
    printf("Enter variable 2: ");
    scanf("%d", &var2);

    printf("After interchanging, varibale 1 = %d and variable 2 = %d\n", var2, var1);

    return 0;
}