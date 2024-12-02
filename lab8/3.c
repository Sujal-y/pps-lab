#include<stdio.h>
int gcd(int m, int n) {
    if (n == 0)
        return m; // Base case
    return gcd(n, m % n); // Recursive case
}
int main(){
    int n1,n2;
    printf("enter 2 numbers");
    scanf("%d%d",&n1,&n2);
    printf("\nResult = %d",gcd(n1,n2));
}