#include<stdio.h>

int main()
{
    char str[100];
    
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    printf("\n");

    int position, length;
    printf("Enter position and length of substring:\n");
    scanf("%d%d", &position, &length);

    char sub[100];
    int i = 0;
    
    while(i < length)
    {
        sub[i] = str[position+i-1];
        i++;
    }
    sub[i] = '\0';

    printf("Selected substring is \"%s\" \n", sub);
    return 0;
}