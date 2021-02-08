#include<stdio.h>

int main()
{
    int n, k;
    printf("Number of multiplication tables: ");
    scanf("%d", &n);
    printf("Number of terms: ");
    scanf("%d", &k);

    for(int i = 1; i <= n; i++)
    {
        for(int j = 1; j <= k; j++)
        {
            printf("%d  ", i*j);
        }
        printf("\n");
    }

    return 0;
}