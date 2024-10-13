//Write a C program to add two integers a and b read through the keyboard.
//Display the result using third variable sum
#include <stdio.h>
int main() {
    int a,b,c;
    printf("enter a n b \n");
    scanf("%d%d",&a,&b);
    c = a+b;
    printf("%d",c);
   return 0;
}