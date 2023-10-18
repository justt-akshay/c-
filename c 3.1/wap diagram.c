#include <stdio.h>
#include <math.h>

int main() {
    int choice;
    printf("Choose a shape to calculate its area:\n");
    printf("1. Circle\n");
    printf("2. Rectangle\n");
    printf("3. Triangle\n");
    printf("Enter your choice (1/2/3): ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            // Calculate the area of a circle
            double radius, circleArea;
            printf("Enter the radius of the circle: ");
            scanf("%lf", &radius);
            circleArea = M_PI * pow(radius, 2);
            printf("The area of the circle is %.2lf square units.\n", circleArea);
            break;

        case 2:
            // Calculate the area of a rectangle
            double length, width, rectangleArea;
            printf("Enter the length of the rectangle: ");
            scanf("%lf", &length);
            printf("Enter the width of the rectangle: ");
            scanf("%lf", &width);
            rectangleArea = length * width;
            printf("The area of the rectangle is %.2lf square units.\n", rectangleArea);
            break;

        case 3:
            // Calculate the area of a triangle
            double base, height, triangleArea;
            printf("Enter the base length of the triangle: ");
            scanf("%lf", &base);
            printf("Enter the height of the triangle: ");
            scanf("%lf", &height);
            triangleArea = 0.5 * base * height;
            printf("The area of the triangle is %.2lf square units.\n", triangleArea);
            break;

        default:
            printf("Invalid choice.\n");
    }

    return 0;
}
