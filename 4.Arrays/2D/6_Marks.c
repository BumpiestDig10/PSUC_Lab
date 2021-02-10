#include<stdio.h>

int main()
{
    int marks[3][5];

    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 5; j++)
        {
            printf("Enter marks of subject %d for student %d: ", j+1, i+1);
            scanf("%d", &marks[i][j]);
        }
        printf("\n");
    }

    int total;
    float average;

    for(int i = 0; i < 3; i++)
    {
        total = 0;
        for(int j = 0; j < 5; j++)
        {
            total = total + marks[i][j];
            average = total/5.0;
        }
        printf("Total marks of student %d: %d\n", i+1, total);
        printf("Average marks of student %d: %.1f\n\n", i+1, average);
    }

    return 0;
}