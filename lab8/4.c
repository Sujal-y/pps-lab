#include<stdio.h>
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
int main(){
    int num;
    printf("enter till which element:- ");
    scanf("%d",&num);
    printFibonacci(num);
}