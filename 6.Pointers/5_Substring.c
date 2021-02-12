#include<stdio.h>
 
int main()
{
    char str[80], search[80];

    char *ptr1;
    ptr1 = &str[0];
    char *ptr2;
    ptr2 = &search[0];

    int count1 = 0, count2 = 0, i, j, flag;
 
    printf("Enter a string: ");
    gets(str);
    printf("Enter search substring: ");
    gets(search);

    while (*ptr1 != '\0')
        {
            count1++;
            ptr1++;
        }

    while (*ptr2 != '\0')
        {
            count2++;
            ptr2++;
        }

    for (i = 0; i <= count1 - count2; i++)
    {
        for (j = i; j < i + count2; j++)
        {
            flag = 1;
            if (str[j] != search[j - i])
            {
                flag = 0;
                break;
            }
        }
        if (flag == 1)
            break;
    }

    if (flag == 1)
        printf("SEARCH SUCCESSFUL!\nFirst occurrence at position: %d.\n", i+1);
    else
        printf("SEARCH UNSUCCESSFUL!\n");
 
    return 0;
}