#include<stdio.h>

int main()
{
    int rA, rB, cA, cB;

    //Taking number of rows and columns as input
    printf("Enter the number of rows in A   : ");
    scanf("%d", &rA);
    printf("Enter the number of columns in A: ");
    scanf("%d", &cA);
    printf("Enter the number of rows in B   : ");
    scanf("%d", &rB);
    printf("Enter the number of columns in B: ");
    scanf("%d", &cB);
    printf("\n");

    //Checking if Multiplication can be done or not
    if(cA != rB)
    {
        printf("Number of columns of A must be equal to number of rows of B.\n");
        return 0;
    }

    //Declaring A and B
    float A[rA][cA], B[rB][cB];

    //Initializing A
    for(int i = 0; i < rA; i++)
    {
        for(int j = 0; j < cA; j++)
        {
            printf("Enter A%d%d: ", i+1, j+1);
            scanf("%f", &A[i][j]);
        }
    }
    printf("\n");

    //Initializing B
    for(int i = 0; i < rB; i++)
    {
        for(int j = 0; j < cB; j++)
        {
            printf("Enter B%d%d: ", i+1, j+1);
            scanf("%f", &B[i][j]);
        }
    }
    printf("\n");

    //Printing A
    printf("A:\n");
    for(int i = 0; i < rA; i++)
    {
        for(int j = 0; j < cA; j++)
        {
            printf("%.2f    ", A[i][j]);
        }
        printf("\n");
    }
    printf("\n");

    //Printing B
    printf("B:\n");
    for(int i = 0; i < rB; i++)
    {
        for(int j = 0; j < cB; j++)
        {
            printf("%.2f    ", B[i][j]);
        }
        printf("\n");
    }
    printf("\n");

    //Declaring C
    float C[rA][cB];

    //Initializing C (Multiplying A and B)
    for(int i = 0; i < rA; i++)
    {
        for(int j = 0; j < cB; j++)
        {
            C[i][j] = 0;
            for(int k = 0; k < cA; k++)
            {
                C[i][j] = C[i][j] + (A[i][k] * B[k][j]);
            }
        }
    }

    //Printing C
    printf("A * B = C:\n");
    for(int i = 0; i < rA; i++)
    {
        for(int j = 0; j < cB; j++)
        {
            printf("%.2f    ", C[i][j]);
        }
        printf("\n");
    }
    printf("\n");

    return 0;
}