//Print all the prime numbers in a given 1D array. 
#include<stdio.h>
int prime(int num){
    int isprime=1;
    for(int i=2;i<num/2;i++){
        if(num%i==0)isprime=0;
    }
    return isprime;
}
int main()
{
    int n;
    printf("enter the size of the array\n");
    scanf("%d",&n);
    int a[n];
    printf("enter the elements of the array\n");
    for(int i=0;i<n;i++)scanf("%d",&a[i]);

    printf("prime numbers are");
    for(int i=0;i<n;i++){
        if(prime(a[i]))printf("\n%d",a[i]);
    }
    printf("\n");
    return 0;
}