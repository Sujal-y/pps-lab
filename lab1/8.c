// Write a C program to evaluate the following expression for the values a = 30,
// b=10, c=5, d=15
// (i) (a + b) * c/ d (ii) ((a + b) c) / d
// (iii) a+ (b c) / d (iv) (a + b) (c / d)
#include <stdio.h>

int main() {
    // Given values
    int a = 30;
    int b = 10;
    int c = 5;
    int d = 15;

    // Evaluate expressions
    float expr1 = (a + b) * c / d;
    float expr2 = ((a + b) * c) / d;
    float expr3 = a + (b * c) / d;
    float expr4 = (a + b) * (c / (float)d); // Cast d to float for correct division

    // Display results
    printf("Expression (i) (a + b) * c / d = %.2f\n", expr1);
    printf("Expression (ii) ((a + b) * c) / d = %.2f\n", expr2);
    printf("Expression (iii) a + (b * c) / d = %.2f\n", expr3);
    printf("Expression (iv) (a + b) * (c / d) = %.2f\n", expr4);

    return 0;
}

