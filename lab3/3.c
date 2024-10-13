//check if sum of cubes of all digits of a number = the number itself
#include <stdio.h>
#include <math.h>
int main() {
    int num,num1,sum = 0,temp;
    printf("enter number \n");
    scanf("%d",&num);
    num1 = num;
    while(num1!=0)
    {
        temp = num1%10;
        sum = sum + pow(temp,3);
        num1 = num1/10;
    }
   
    if(sum == num) printf("armstrong number!!");
    else printf("not strong enough");

    
   return 0;
}