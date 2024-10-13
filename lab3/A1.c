// Check whether the given number is strong or not.
// [Hint: Positive number whose sum of the factorial of its digits is equal to the
// number itself] Ex: 145 = 1! + 4! + 5! = 1 + 24 + 120 = 145 is a strong
// number.
#include <stdio.h>
int fact(int num) 
{
    int fact =1;
    for(int i =1;i<=num;i++)fact = fact*i;
    return fact;
}
int main() {
    int num,temp,sum = 0,digit;
    printf("enter number \n");
    scanf("%d",&num);
    temp = num;
    while(temp!=0)
    {
        digit = temp%10; // single digit
        sum = sum + fact(digit) ;
        temp = temp/10;
    }
   
    if(sum == num) printf("strong number!!");
    else printf("not strong enough");

    
   return 0;
}