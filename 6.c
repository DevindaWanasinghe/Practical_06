#include <stdio.h>
#include <math.h>

double calDiameter(double radius) {
    return 2 * radius;
}

double calference(double radius) {
    return 2 * M_PI * radius;
}

double calArea(double radius) {
    return M_PI * pow(radius, 2);
}

int main() {
    double radius;
    printf("Enter the radius of the circle: ");
    if (scanf("%lf", &radius) != 1) {
        printf("Invalid input!\n");
        return 1;
    }

    if (radius < 0) {
        printf("Radius cannot be negative.\n");
        return 1;
    }

    double diameter = calDiameter(radius);
    double cirference = calference(radius);
    double area = calArea(radius);

    printf("Diameter: %.2f\n", diameter);
    printf("Circumference: %.2f\n", cirference);
    printf("Area: %.2f\n", area);

    return 0;
}

