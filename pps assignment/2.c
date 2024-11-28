#include <stdio.h>
#include <stdlib.h>
#include <string.h>
// Function to compute GCD using recursion
int gcd(int m, int n) {
    if (n == 0)
        return m; // Base case
    return gcd(n, m % n); // Recursive case
}
// Recursive function to compute the nth Fibonacci number
int fibonacci(int n) {
    if (n == 0)
        return 0; // Base case: F(0) = 0
    if (n == 1)
        return 1; // Base case: F(1) = 1
    return fibonacci(n - 1) + fibonacci(n - 2); // Recursive case
}
void printFibonacci(int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", fibonacci(i));
    }
    printf("\n");
}

int main() {
    int ninputs;
    char input[100];
    char command;
    int m, n;
    scanf("%d",&ninputs);
    while(ninputs>0){
        fgets(input, sizeof(input), stdin);
        if (sscanf(input, "G %d %d", &m, &n) == 2) {// Checks if the input starts with 'G'
            if(n<1||n>100) exit(0);
            if(m<1||m>100) exit(0);
            printf("%d\n", gcd(m, n));
        }
        else if (sscanf(input, "F %d", &n) == 1) {// Checks if the input starts with 'F'
            if(n<1||n>100) exit(0);
            if (n <= 0) {
                printf("The value of n must be greater than 0\n");
                return 1; // Exit with error
            }
            // Print the Fibonacci series
            printFibonacci(n);
        }
        n--;
    }
    return 0;
}