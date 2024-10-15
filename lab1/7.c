//Write a C program to convert the given temperature in Fahrenheit to Centigrade.
// [Hint: C=5/9(F-32)]
#include <stdio.h>

int main() {
    float f, c;
    printf("Enter temperature in Fahrenheit: ");
    scanf("%f", &f);
    c = (5.0 / 9.0) * (f - 32);
    printf("Temperature in Centigrade: %.2f\n", c);
    return 0;
}
