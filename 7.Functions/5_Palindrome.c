#include<stdio.h>
#include<string.h>

void Palindrome(int n, char str[n]);

int main()
{
    /*int n;
    printf("Length of the string: ");
    scanf("%d", &n);*/
    char str[1000];
    printf("Enter a string: ");
    gets(str);
    int n = strlen(str);

    char *ptr;
    ptr = &str[0];

    Palindrome(n, ptr);

    return 0;
}

void Palindrome(int n, char str[n])
{
    int c = 0, i;
    n = strlen(str);

    for(i = 0; i < n/2; i ++)
    {
        if(str[i] == str[n-i-1])
        {
            c++;
        }
    }

    if (c == i)
    {
        printf("String is a palindrome.\n");
    }
    else
    {
        printf("String is not a palindrome.\n");
    }
}