//Write a C program to input radius, compute and display the volume and surface
// a area of a sphere. [Hint: volume = (4ur*)/3, Area=47r2]
#include <stdio.h>
#define PI 3.14159

int main() {
    float radius, volume, surfaceArea;

    // Input for radius
    printf("Enter the radius of the sphere: ");
    scanf("%f", &radius);

    // Calculate volume and surface area
    volume = (4.0 / 3.0) * PI * radius * radius * radius;
    surfaceArea = 4 * PI * radius * radius;

    // Display results
    printf("Volume of the sphere = %.2f\n", volume);
    printf("Surface area of the sphere = %.2f\n", surfaceArea);

    return 0;
}
