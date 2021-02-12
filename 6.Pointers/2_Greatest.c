#include<stdio.h>

int main()
{
    int a, b, c;
    int *p1 = &a, *p2 = &b, *p3 = &c;

    printf("a = ");
    scanf("%d", &a);
    printf("b = ");
    scanf("%d", &b);
    printf("c = ");
    scanf("%d", &c);

    if(*p1 > *p2 && *p1 > *p3)
    {
        printf("%d is greatest.\n", *p1);
    }
    else if(*p2 > *p1 && *p2 > *p3)
    {
        printf("%d is greatest.\n", *p2);
    }
    else
    {
        printf("%d is greatest\n", *p3);
    }

    return 0;
}