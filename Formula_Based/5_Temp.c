#include<stdio.h>

int main()
{
    float c=0, f=0;
    int option;

    printf("Entering temperature in: (1)Centigrade  (2)Fahrenheit\n");
    scanf("%d", &option);

    if(option == 1)
    {
        printf("Temperature: ");
        scanf("%f", &c);
        f = ((9*c)/5)+32;
        printf("In Fahrenheit: %f\n", f);
    }
    else if(option == 2)
    {
        printf("Temperature: ");
        scanf("%f", &f);
        c = (5*(f-32))/9;
        printf("In Centigrade: %f\n", c);
    }
    else
    {
        printf("Invalid Input!\n");
    }

    return 0;
}