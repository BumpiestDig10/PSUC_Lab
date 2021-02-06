#include <stdio.h>
int main()
{
    int num;
    float bill = 0;
    int charge;

    printf("Enter unit charge: ");
    scanf("%d", &charge);

    if(charge >= 1 && charge <= 100)
    {
        num = 1;
    }
    else if(charge > 100 && charge <=200)
    {
        num = 2;
    }
    else if(charge > 200 && charge <= 400)
    {
        num = 3;
    }
    else if (charge > 400)
    {
        num = 4;
    }
    else
    {
        num = 5;
    }

    switch(num)
    {
        case 1:
            printf("Bill: Rs.%f\n", bill);
            break;
        case 2:
            bill = bill + 1.5*(charge-100);
            printf("Bill: Rs.%f\n", bill);
            break;
        case 3:
            bill = 150 + 2.5*(charge-200);
            printf("Bill: Rs.%f\n", bill);
            break;
        case 4:
            bill = 650 + 3.5*(charge-400);
            printf("Bill: Rs.%f\n", bill);
            break;
        default:
            printf("Invalid!\n");
            break;
    }

    return 0;
}