#include<stdio.h>
#include<math.h>

int main()
{
    int x, n;

    printf("x = ");
    scanf("%d", &x);
    printf("n = ");
    scanf("%d", &n);

    int factorial = 2;

    float sum = 0;
    int sign = 1;
    float add = 0;
    int fact = 2;

    printf("sin(%d) = ", x);

    for(int power = 1; power <= n; power++)
    {
        if(power%2 != 0)
        {
            printf("(%.1f*%.1f)/(%d)! ", pow(-1, sign+1), pow(x,power), power+1);
            sign = sign + 1;
            //sum = sum + (pow(-1, sign) * pow(x,power));
            while(factorial-power == 1)
            {
                
                for(int i = 1; i <= factorial; i++)
                {
                    fact = fact*i;
                    add = pow(-1, sign) * pow(x,power)/(fact);
                }
                fact = 2;
                //printf("%f", add);
                sum = sum + add;
                factorial++;
            }
        }
        else
        {
            printf("+ ");
            continue;
        }
    }

    printf("= %.4f\n", sum);

    return 0;
}