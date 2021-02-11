#include<stdio.h>

int main()
{
    char str[100];
    
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    int counter = 0, i =0;

    while(str[i] != '\0')
    {
        if(str[i] == ' ' || str[i] == '\n' || str[i] == '\t')
        {
            counter++;
        }
        i++;
    }

    printf("There are %d word(s) in this string.\n", counter);

    return 0;
}