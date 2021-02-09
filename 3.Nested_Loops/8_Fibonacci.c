#include<stdio.h>
int main()
{
    int i, firstNum, lastNum, t1=0, t2=1, nextTerm;
    printf("Enter range: ");
    scanf("%d%d", &firstNum, &lastNum);
    printf("Fibonacci series in between %d and %d: ", firstNum, lastNum);

    for(i = 1; i <= lastNum; i++)
    {
        if(t1 <= lastNum)
        {
            if(t1 >= firstNum)
            {
                printf("%d  ", t1);
            }
            nextTerm = t1 + t2;
            t1 = t2;
            t2 = nextTerm;
        }
    }
    printf("\n");

    return 0;
}