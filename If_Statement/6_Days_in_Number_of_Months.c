#include<stdio.h>
int main()
{
    int month, sum;
    sum = 0;
    printf("Enter month number: ");
    scanf("%d", &month);
    if(month >= 1 && month <= 12)
    {
        for(int count = 1; count <= month; count++)
        {
            switch(count)
            {
                case 1:
                    sum = sum + 31;
                    break;
                case 2:
                    sum = sum + 28;
                    break;
                case 3:
                    sum = sum + 31;
                    break;
                case 4:
                    sum = sum + 30;
                    break;
                case 5:
                    sum = sum + 31;
                    break;
                case 6:
                    sum = sum + 30;
                    break;
                case 7:
                    sum = sum + 31;
                    break;
                case 8:
                    sum = sum + 31;
                    break;
                case 9:
                    sum = sum + 30;
                    break;
                case 10:
                    sum = sum + 31;
                    break;
                case 11:
                    sum = sum + 30;
                    break;
                case 12:
                    sum = sum + 31;
                    break;
            }
        }
        printf("Total number of days= %d\n", sum);
    }
    else
    {
        printf("Invalid! Month number must be between 1-12\n");
    }
    
    return 0;
}