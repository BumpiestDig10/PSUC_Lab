#include<stdio.h>
int main()
{
    int n;
    printf("Number of elements in array: ");
    scanf("%d", &n);

    int array[n];

    for(int i = 0; i < n; i++)
    {
        printf("Enter element %d: ", i+1);
        scanf("%d", &array[i]);
    }
    printf("\n");

    for(int i = 0; i < n; i++)
    {
        printf("%d  ", array[i]);
    }
    printf("\n");

    int positive = 0, negative = 0, even = 0, odd = 0, zero = 0;

    for(int i = 0; i < n; i++)
    {
        if(array[i] > 0)
        {
            positive++;
        }
        else if(array[i] < 0)
        {
            negative++;
        }
        
        if(array[i] == 0)
        {
            zero++;
        }

        if(array[i] != 0)
        {
            if(array[i]%2 == 0)
            {
                even++;
            }
            else
            {
                odd++;
            }
        }
    }

    printf("Number of Positive elements: %d\n", positive);
    printf("Number of Negative elements: %d\n", negative);
    printf("Number of Zero elements:     %d\n", zero);
    printf("Number of Even elements:     %d\n", even);
    printf("Number of Odd elements:      %d\n", odd);
    
    return 0;
}