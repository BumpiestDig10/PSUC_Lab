#include<stdio.h>
int main()
{
    int seconds;
    int hours;
    int minutes;

    printf("Enter seconds: ");
    scanf("%d", &seconds);

    hours = seconds/3600;
    minutes = (seconds%3600)/60;
    seconds = ((seconds%3600)%60);

    printf("%dhour(s) %dminute(s) %dsecond(s)", hours,minutes,seconds);

    return 0;
}