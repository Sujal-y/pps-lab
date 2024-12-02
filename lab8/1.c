#include<stdio.h>
#include<stdlib.h>
long int Fact(int num){
if(num==0)return 1;//base case
long int fact =num*Fact(num-1);
return fact;
}
int main()
{
    int n,r;
    printf("enter N c R \n");
    scanf("%d%d",&n,&r);
    //N c R = N!/(R!*(N-R)!)
    long int result= Fact(n)/(Fact(r)*Fact(n-r));
    printf("result = %ld\n",result);
 
    return 0;
}