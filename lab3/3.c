//check if sum of cubes of all digits of a number = the number itself
#include <stdio.h>
#include <math.h>
int main() {
    int num,temp,sum = 0,digit;
    printf("enter number \n");
    scanf("%d",&num);
    temp = num;
    while(temp!=0)
    {
        digit = temp%10;
        sum = sum + pow(digit,3);
        temp = temp/10;
    }
   
    if(sum == num) printf("armstrong number!!");
    else printf("not strong enough");

    
   return 0;
}