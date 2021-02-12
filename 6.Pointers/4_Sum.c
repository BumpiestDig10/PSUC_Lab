#include<stdio.h>

int main()
{
    int n;
    printf("Enter number of elements in array: ");
    scanf("%d", &n);

    float arr[n];
    float *p;
    p = &arr[0];

    float sum = 0;
    float *add = &sum;

    printf("Enter an array: ");
    for(int i = 0; i < n; i++)
    {
        scanf("%f", p);
        sum = *add + *p;
        p++;
    }

    printf("Array: ");
    for(int i = 0; i < n; i++)
    {
        printf("%.2f    ", arr[i]);
    }

    printf("\nSum of array is: %.2f.\n", sum);

    return 0;
}