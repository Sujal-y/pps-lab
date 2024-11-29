// A self-dividing number is a number that is divisible by every digit it contains.
// For example, 128 is a self-dividing number because 128 % 1 == 0, 128 % 2 == 0, and 128 % 8 == 0.
// A self-dividing number is not allowed to contain the digit zero.
// Given two integers left and right, return a list of all the self-dividing numbers in the range [left, right]
#include<stdio.h>
int checkselfdiving(int num){
    int istrue = 1;
    int temp,permnum=num;
    while(num>0){
        temp=num%10;
        if(permnum%temp != 0)istrue=0;
        num/=10;
    }
    return istrue;

}
int main() {
   int ub,lb;
   printf("enter left and right ");
   scanf("%d%d",&lb,&ub);
   printf("\n[");
   for(int i =lb;i<=ub;i++){
    if(checkselfdiving(i)) printf("%d,",i);
    }
   printf("]\n");
   return 0;
}