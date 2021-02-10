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

    printf("Sorted Array:   ");
    for(int i = 0; i < n; i++)
    {
        for(int j = i+1; j < n; j++)
        {
            if(array[i] > array[j])
            {
                int temp = array[j];
                array[j] = array[i];
                array[i] = temp;
            }
        }
        printf("%d  ", array[i]);
    }
    printf("\n");

    return 0;
}