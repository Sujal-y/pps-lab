// Write a C program to input P, N and R, compute and display simple and
// compound interest. [Hint: SI = PNR/100, CI = P(1+R/100)NP]
#include <stdio.h>
#include <math.h>

int main() {
    float prin, rate, SI, CI;
    float n;

    // Input for Principal, Rate, and Number of years
    printf("Enter the P N R: ");
    scanf("%f",&prin);
    scanf("%f",&n);
    scanf("%f",&rate);
    
    // Calculate Simple Interest
    SI = (prin * n * rate) / 100;

    // Calculate Compound Interest
    CI = prin * pow((1 + rate / 100), n) - prin;

    // Display results
    printf("Simple Interest (SI) = %.2f\n", SI);
    printf("Compound Interest (CI) = %.2f\n", CI);

    return 0;
}
