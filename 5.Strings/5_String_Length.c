#include<stdio.h>
#include<string.h>

int main()
{
    char str[100];
    
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    int counter = 0, i = 0;

    while(str[i] != '\0')
    {
        counter++;
        i++;
    }
    i--;
    printf("Length of string is %d.\n", i);

    return 0;
}