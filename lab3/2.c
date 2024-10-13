//generatre prime numbers between 2 limitss
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
    int ubound,lbound;
    printf("enter lower and upper limit \n");
    scanf("%d%d",&lbound,&ubound);
    printf("the prime numbers are \n");
    int num = lbound;
    for(int i;num<=ubound;i++)
    {
        if(checkprime(num) == 1){
            printf("%d\n",num);
        }
        num++;
    }

   return 0;
}