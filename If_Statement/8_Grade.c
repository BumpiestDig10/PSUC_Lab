#include<stdio.h>
int main()
{
    int score;
    printf("Enter quiz score: ");
    scanf("%d", &score);

    if(score >= 0 && score <= 10)
    {
        if(score > 8)
        {
            printf("Grade: A\n");
        }
        else if(score >= 7 && score <= 8)
        {
            printf("Grade: B\n");
        }
        else if(score >= 5 && score <= 6)
        {
            printf("Grade: C\n");
        }
        else if(score >= 3 && score <= 4)
        {
            printf("Grade: D\n");
        }
        else
        {
            printf("Grade: F\n");
        }
    }
    else
    {
        printf("Invalid score.\n");
    }
    
    return 0;
}