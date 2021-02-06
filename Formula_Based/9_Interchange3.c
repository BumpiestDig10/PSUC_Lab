#include<stdio.h>

int main()
{
    int var1, var2, var3;
    printf("Enter variable 1: ");
    scanf("%d", &var1);
    printf("Enter variable 2: ");
    scanf("%d", &var2);

    var3 = var2;
    printf("\nAfter interchanging, variable 1 = %d ", var3);
    var3 = var1;
    printf("and variable 2 = %d\n", var3);

    return 0;
}