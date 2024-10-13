//Write a C program to find the sum, difference, product and quotient of 2 numbers.
#include <stdio.h>
int main() {
    int a,b;
    printf("enter a n b \n");
    scanf("%d%d",&a,&b);
    printf("%d + %d = %d\n",a,b,a+b);
    printf("%d - %d = %d\n",a,b,a-b);
    printf("%d * %d = %d\n",a,b,a*b);
    printf("%d / %d = %d\n",a,b,a/b);
   return 0;
}