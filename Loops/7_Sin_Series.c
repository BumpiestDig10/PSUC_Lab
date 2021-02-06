#include<stdio.h>
#include<math.h>

int main()
{
    int x, n;

    printf("x = ");
    scanf("%d", &x);
    printf("n = ");
    scanf("%d", &n);

    int sum = 0;
    int sign = 1;

    printf("sin(%d) = ", x);

    for(int power = 1; power <= n; power++)
    {
        if(power%2 != 0)
        {
            printf("(%f*%f) ", pow(-1, sign+1), pow(x,power));
            sign = sign + 1;
            sum = sum + (pow(-1, sign) * pow(x,power));
        }
        else
        {
            printf("+ ");
            continue;
        }
    }

    printf("= %d\n", sum);

    return 0;
}