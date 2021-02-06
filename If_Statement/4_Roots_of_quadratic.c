#include<stdio.h>
#include<math.h>
int main()
{
    float a, b, c, disc, root1, root2;

    printf("Enter a: ");
    scanf("%f", &a);
    printf("Enter b: ");
    scanf("%f", &b);
    printf("Enter c: ");
    scanf("%f", &c);

    disc = (b*b) - (4*a*c);

    if(disc == 0)
    {
        printf("Real and equal roots:\n");
        root1 = -b/(2*a);
        printf("%f\n", root1);
    }
    else if(disc > 0)
    {
        printf("Real and different roots:\n");
        root1= (-b + sqrtf(disc))/(2*a);
        root2= (-b - sqrtf(disc))/(2*a);
        printf("Root 1: %f\n", root1);
        printf("Root 2: %f\n", root2);
    }
    else
    {
        printf("No real roots.\n");
    }

    return 0;
}