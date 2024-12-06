//1.Write C programs to perform the following pointer arithmetic operations 
//(a) Decre- ment in a Pointer (b) Addition of integer to a pointer 
//(c) Subtraction of integer to a pointer.
#include<stdio.h>

int main() {
    int a =5,*ptr;
    ptr = &a;
    printf("value of pointer variable = %d\n",*ptr);
    *ptr-=1;
    printf("value of pointer variable after decrement = %d\n",*ptr);
    *ptr = *ptr+6;
    printf("value of pointer variable after addition = %d\n",*ptr);
    *ptr = *ptr-3;
    printf("value of pointer variable after subtraction = %d\n",*ptr);
    return 0;
}