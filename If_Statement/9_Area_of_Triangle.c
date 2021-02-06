#include<stdio.h>
int main()
{
    float a, b, c, area;
    printf("Enter the three sides:\n");
    scanf("%f%f%f", &a, &b, &c);

    if(a+b>c && a+c>b && b+c>a)
    {
        area = (a+b+c)/2;
        printf("Area is: %f\n", area);
    }
    else
    {
        printf("invalid Input!\n");
    }

    return 0;
}