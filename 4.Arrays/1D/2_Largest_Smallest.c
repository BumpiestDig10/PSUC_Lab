#include<stdio.h>
#include<limits.h>

int main()
{
    int smallest = INT_MAX;
    //printf("%d", smallest);
    int largest = INT_MIN;

    int n;
    printf("Number of elements: ");
    scanf("%d", &n);

    int array[n];
    for(int i = 0; i < n; i++)
    {
        printf("Element %d: ", i+1);
        scanf("%d", &array[i]);
    }

    for(int i = 0; i < n ; i++)
    {
        printf("%d  ", array[i]);
    }
    printf("\n");

    for(int i = 0; i < n; i++)
    {
        if(smallest > array[i])
        {
            smallest = array[i];
        }

        if(largest < array[i])
        {
            largest = array[i];
        }
    }

    printf("Smallest number in the array is: %d\n", smallest);
    printf("Largest number in the array is: %d\n", largest);

    return 0;
}