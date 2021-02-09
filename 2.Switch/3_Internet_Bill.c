#include<stdio.h>
int main()
{
    int calls, num;
    float bill;
    printf("Enter number of calls: ");
    scanf("%d", &calls);

    if(calls>=0 && calls<=100)
    {
        num =1;
    }
    else if(calls>100 && calls<=150)
    {
        num =2;
    }
    else if(calls>150 && calls<=200)
    {
        num =3;
    }
    else if(calls>200)
    {
        num =4;
    }
    else
    {
        num =0;
    }

    switch(num)
    {
        case 1:
            bill = 200;
            printf("Bill: Rs.%.2f\n", bill);
            break;
        case 2:
            bill = 200;
            for(int i = 101; i <= calls; i++)
            {
                bill = bill + 0.6;
            }
            printf("Bill: Rs.%.2f\n", bill);
            break;
        case 3:
            bill = 230;
            for(int i = 151; i <= calls; i++)
            {
                bill = bill + 0.5;
            }
            printf("Bill: Rs.%.2f\n", bill);
            break;
        case 4:
            bill = 255;
            for(int i = 201; i <= calls; i++)
            {
                bill = bill + 0.4;
            }
            printf("Bill: Rs.%.2f\n", bill);
            break;
        default: printf("Invalid!\n");
            break;
    }

    return 0;
}