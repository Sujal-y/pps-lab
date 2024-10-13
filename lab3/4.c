//count number of prime and composite numbers entered until -1 use do while
#include <stdio.h>
int checkprime(int num) 
{
    int is_prime = 1;
    for(int i = 2;i<=num/2;i++)
    {
        if(num%i == 0) is_prime =0;
    }
    return is_prime;
}
int main() {
    int primes =0 ,composites = 0,num;
    do
    {
        printf("enter a number \n");
        scanf("%d",&num);
        if(checkprime(num)) primes++;
        else composites++;

    } while (num != -1);
    
    printf("primes = %d \n",primes);
    printf("composites = %d\n",composites);
    
   return 0;
}