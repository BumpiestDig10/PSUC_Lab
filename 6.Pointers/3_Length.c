#include<stdio.h>

int main()
{
    char s[100];
    char *p;
    p = &s[0];

    printf("Enter a string: ");
    fgets(s, sizeof(s), stdin);

    int length = 0;
    while(*p != '\0')
    {
        length++;
        p++;
    }

    length--;

    printf("Length of string is: %d.\n", length);

    return 0;
}