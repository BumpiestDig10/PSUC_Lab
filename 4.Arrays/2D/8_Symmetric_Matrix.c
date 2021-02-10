#include<stdio.h>

int main()
{
    int rA, cA;

    //Taking number of rows and columns as input.
    printf("Number of rows      :");
    scanf("%d", &rA);
    printf("Number of columns   :");
    scanf("%d", &cA);
    printf("\n");

    //Checking if the matrix is square matrix or not
    if(rA != cA)
    {
        printf("It cannot be a symmetric matrix.\n");
        return 0;
    }

    //Declaring Matrix
    float A[rA][cA];

    //Initializing Matrix
    for(int i = 0; i < rA; i++)
    {
        for(int j = 0; j < cA; j++)
        {
            printf("A%d%d: ", i+1, j+1);
            scanf("%f", &A[i][j]);
        }
    }
    printf("\n");

    //Printing Matrix
    for(int i = 0; i < rA; i++)
    {
        for(int j = 0; j < cA; j++)
        {
            printf("%.2f    ", A[i][j]);
        }
        printf("\n");
    }
    printf("\n");

    //Checking Symmetry
    for(int i = 0; i < rA; i++)
    {
        for(int j = 0; j < cA; j++)
        {
            if(A[i][j] != A[j][i])
            {
                printf("Matrix is not symmetric.\n");
                return 0;
            }
        }
    }
    printf("Matrix is symmetric.\n");

    return 0;
}