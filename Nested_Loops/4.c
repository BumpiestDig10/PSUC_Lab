#include<stdio.h>

int main()
{
    int rows;
    printf("Enter number of rows: ");
    scanf("%d", &rows);

    int n = 1;
    int k = 2;
    
    for(int i = 1; i <= rows; i++)
    {
        if(i%2 != 0)
        {
            for(int j = 1; j <= i; j++)
            {
                printf("%d  ", n);
                n+=2;
            }
            printf("\n");
        }
        else
        {
            for(int j = 1; j <= i; j++)
            {
                printf("%d  ", k);
                k+=2;
            }
            printf("\n");
        }
    }

    return 0;
}