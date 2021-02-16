#include<stdio.h>
#include<string.h>

char name[25][25];
int count;

void sort(int count);

int main()
{
    printf("Number of names: ");
    scanf("%d", &count);

    sort(count);

    return 0;
}

void sort(int count)
{
    char temp[25];

    printf("Enter names one by one: ");
    for(int i = 0; i <= count; i++)
    {
        gets(name[i]);
    }

    for(int i = 0; i <= count; i++)
    {
        for(int j = i+1; j <= count; j++)
        {
            if(strcmp(name[i], name[j]) > 0)
            {
                strcpy(temp, name[i]);
                strcpy(name[i], name[j]);
                strcpy(name[j], temp);
            }
        }
    }

    printf("Sorted name: ");
    for(int i = 0; i <= count; i++)
    {
        puts(name[i]);
    }
}