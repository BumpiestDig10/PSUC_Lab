#include<stdio.h>
int main()
{
    float mm, cm, inch, feet;

    printf("Enter distance in mm: ");
    scanf("%f", &mm);

    cm = mm/10.0;
    inch = cm/2.5;
    feet = inch/12.0;
    
    printf("%fmm = %fcm = %finch = %ffeet\n", mm,cm,inch,feet);

    return 0;
}