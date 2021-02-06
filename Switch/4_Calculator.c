#include <stdio.h>
int main()
{
    int choice;
    float a, b, result;
    printf("a = ");
    scanf("%f", &a);
    printf("b = ");
    scanf("%f", &b);
    printf("(1)Addition     (2)Subtraction      (3)Multiplication       (4)Division\n");
    printf("Enter the operator: ");
    scanf("%d", &choice);
    printf("\n");

    switch(choice)
    {
        case 1:
            result = a + b;
            printf("%f + %f = %f\n", a, b, result);
            break;
        case 2:
            result = a - b;
            printf("%f - %f = %f\n", a, b, result);
            break;
        case 3:
            result = a * b;
            printf("%f * %f = %f\n", a, b, result);
            break;
        case 4:
            result = a / b;
            printf("%f/%f = %f\n", a, b, result);
            break;
        default: printf("Invalid!\n");
            break;
    }

    return 0;
}