#include<stdio.h>
int main()
{
    int i, range, t1=0, t2=1, nextTerm;
    printf("Enter range: ");
    scanf("%d", &range);
    printf("Fibonacci series: ");

    for(i = 1; i <= range; i++)
    {
        if(t1 <= range)
        {
            printf("%d  ", t1);
            nextTerm = t1 + t2;
            t1 = t2;
            t2 = nextTerm;
        }
    }
    printf("\n");

    return 0;
}