#include <stdio.h>

int hcf(int n1, int n2);

int main()
{
    int n1, n2;

    printf("n1 =  ");
    scanf("%d", &n1);
    printf("n2 =  ");
    scanf("%d", &n2);

    printf("\nG.C.D of %d and %d is %d.\n", n1, n2, hcf(n1, n2));
    return 0;
}

int hcf(int n1, int n2)
{
    if (n2 != 0)
    {
        return hcf(n2, n1 % n2);
    }   
    else
    {
        return n1;
    }
}