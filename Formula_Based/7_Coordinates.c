#include<stdio.h>
#include<math.h>

int main()
{
    float x1, y1, x2, y2;
    double distance;

    printf("Enter the coordinates-\n");
    printf("x1: ");
    scanf("%f", &x1);
    printf("y1: ");
    scanf("%f", &y1);
    printf("x2: ");
    scanf("%f", &x2);
    printf("y2: ");
    scanf("%f", &y2);

    distance = sqrt(((x2-x1)*(x2-x1)) + ((y2-y1)*(y2-y1)));

    printf("Distance between (%f,%f) and (%f,%f)= %f\n", x1,y1, x2,y2, distance);

    return 0;
}