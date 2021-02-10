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

    printf("Original Array: ");
    for(int i = 0; i < n; i++)
    {
        printf("%d  ", array[i]);
    }
    printf("\n");

    int reverse[n];

    printf("Reversed Array: ");
    for(int i = n-1; i >= 0; i--)
    {
        reverse[i] = array[n-i-1];
    }

    for(int i = 0; i < n; i++)
    {
        printf("%d  ", reverse[i]);
    }
    printf("\n");

    return 0;
}