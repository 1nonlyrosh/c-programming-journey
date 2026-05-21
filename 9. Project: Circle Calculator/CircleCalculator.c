// Given the radius of a circle we would calculate the circle's circumference and area, and the surface area and volume of the resulting sphere.
#include <stdio.h>
#include <math.h>

int main() {
    double radius = 0.0f;
    double area = 0.0f;
    double pi = 3.14159;
    double circumference = 0.0f;
    double surfaceArea = 0.0f;
    double volume = 0.0f;

    printf("Enter the radius of the required circle and the sphere (in cm): ");
    scanf("%lf", &radius);

    // Circumference
    radius = 2 * pi * radius;
    printf("The circumference of the circle is: %.2lf cm\n", radius);

    // Area
    area = pi * pow(radius, 2);
    printf("The area of the circle is: %.2lf cm^2\n", area);

    // Surface Area
    surfaceArea = 4 * pi * pow(radius, 2);
    printf("The surface area of the sphere is: %.2lf cm^2\n", surfaceArea);

    // Volume
    volume = (4/3) * pi * pow(radius, 3);
    printf("The volume of the sphere is: %.2lf cm^3\n", volume);

    return 0;
}