#include<stdio.h>

int main()
{
    char s[100], r[100];
    printf("Enter a string:\n");
    fgets(s, sizeof(s), stdin);
    printf("\n");

    int count = 0, begin, end;

    while(s[count] != '\0')
    {
        count++;
    }
    end = count - 1;

    for(begin = 0; begin < count; begin++)
    {
        r[begin] = s[end];
        end--;
    }

    printf("Reverse of the string:\n%s\n", r);
}