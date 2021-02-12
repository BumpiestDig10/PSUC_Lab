#include<stdio.h>

int main()
{
    float a, b;
    float *p1 = &a;
    float *p2 = &b;

    printf("a = ");
    scanf("%f", p1);
    printf("b = ");
    scanf("%f", p2);

    float sum;
    float *p3 = &sum;
    *p3 = a + b;

    printf("%.2f + %.2f = %.2f\n", *p1, *p2, *p3);

    return 0;
}