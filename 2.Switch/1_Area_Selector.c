#include<stdio.h>
int main()
{
    int choice;
    float area;
    printf("Enter the number corresponding to the area you wish to find:\n1.Circle\n2.Rectangle\n3.Triangle\n");
    printf("Your choice: ");
    scanf("%d", &choice);
    printf("\n");

    switch(choice)
    {
        case 1:
            printf("You have selected Circle.\n");
            float radius;
            printf("Enter the radius: ");
            scanf("%f", &radius);
            area = (radius*radius*22)/7;
            printf("Area of the circle = %.2f\n", area);
            break;
        case 2:
            printf("You have selected Rectangle.\n");
            float length, breadth;
            printf("Enter length: ");
            scanf("%f", &length);
            printf("Enter breadth: ");
            scanf("%f", &breadth);
            area = length*breadth;
            printf("Area of the rectangle = %.2f\n", area);
            break;
        case 3:
            printf("You have selected Triangle.\n");
            float base, height;
            printf("Enter base length: ");
            scanf("%f", &base);
            printf("Enter height: ");
            scanf("%f", &height);
            area = (base*height)/2;
            printf("Area of the triangle is: %.2f\n", area);
            break;
        default:
            printf("Invalid choice.\n");
            break;
    }

    return 0;
}