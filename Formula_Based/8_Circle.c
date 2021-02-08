#include<stdio.h>

int main()
{
    float radius, area;

    printf("Enter radius of the circle: ");
    scanf("%f", &radius);

    area = 22*radius*radius/7.0;
    printf("Area = %.2f\n", area);

    return 0;
}