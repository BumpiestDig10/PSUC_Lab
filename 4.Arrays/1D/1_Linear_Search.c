#include<stdio.h>
int main()
{
    int n;
    printf("Number of elements in array: ");
    scanf("%d", &n);

    int array[n], key;

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

    printf("Enter the element you wish to search for: ");
    scanf("%d", &key);

    for(int i = 0; i < n; i++)
    {
        if(array[i] == key)
        {
            printf("%d found at position %d.\n", key, i+1);
            return 0;
        }
    }
    printf("%d is not present in this array.\n", key);

    return 0;
}