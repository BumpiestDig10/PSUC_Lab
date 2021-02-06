#include<stdio.h>
int main()
{
    int calls, num;
    float bill;
    bill = 0;
    printf("Enter number of calls: ");
    scanf("%d", &calls);
    printf("\n");
    
    if(calls>= 1 && calls<=150)
    {
        num = 1;
    }
    else if(calls>150 && calls<=250)
    {
        num = 2;
    }
    else if(calls>250 && calls <=400)
    {
        num = 3;
    }
    else if(calls>400)
    {
        num = 4;
    }
    else
    {
        num = 0;
    }

    switch(num)
    {
        case 1: 
            printf("Bill: Rs.%f\n", bill);
            break;
        case 2:
            bill = bill + 0.9*(calls - 150);
            printf("Bill: Rs.%f\n", bill);
            break;
        case 3:
            bill = 90 + 1.2*(calls - 250);
            printf("Bill: Rs.%f\n", bill);
            break;
        case 4:
            bill = 270 + 1.5*(calls - 400);
            printf("Bill: Rs.%f\n", bill);
            break;
        default:
            printf("Invalid!\n");
            break;
    }

    return 0;
}