#include<stdio.h>
int main()
{
    float discount;
    int num, cost;
    printf("Enter the cost: ");
    scanf("%d", &cost);

    if(cost>=800)
    {
        num = 1;
    }
    else if(cost>=500 && cost<800)
    {
        num = 2;
    }
    else if(cost < 500)
    {
        num = 3;
    }
    
    switch(num)
    {
        case 1:
            discount = (cost*25)/100;
            printf("Congratulations! You are eligible for Rs.%f discount.\n", discount);
            break;
        case 2:
            discount = (cost*20)/100;
            printf("Congratulations! You are eligible for Rs.%f discount.\n", discount);
            break;
        case 3:
            printf("Sorry you are not eligible for any discount.\n");
            break;
    }

    return 0;
}