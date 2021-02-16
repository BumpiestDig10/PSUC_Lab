#include<stdio.h>
#include<string.h>

char name[25][25];
int count;
int i, j;

void sort(int count);
int compare();

int main()
{
    printf("Number of names: ");
    scanf("%d", &count);

    printf("Enter names one by one:\n");
    for(i = 0; i <= count; i++)
    {
        fgets(name[i], sizeof(name[i]), stdin);
    }
    sort(count);

    printf("\nSorted name: ");
    for(i = 0; i <= count; i++)
    {
        fputs(name[i], stdout);
    }

    return 0;
}

void sort(int count)
{
    char temp[25];

    for(i = 0; i <= count; i++)
    {
        for(j = i+1; j <= count; j++)
        {
            if(compare() > 0)
            {
                strcpy(temp, name[i]);
                strcpy(name[i], name[j]);
                strcpy(name[j], temp);
            }
        }
    }
}

int compare()
{
    return strcmp(name[i], name[j]);
}