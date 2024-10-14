//reverse a a number to check weather its a paildrome or not
#include <stdio.h>
int main() {
   int n,temp,rev=0;
   printf("enter the number");
   scanf("%d",&n);
   temp = n;
   while(temp>0)
   {
    rev = rev*10+temp%10;
    temp /=10;
   }
   if(rev == n) printf("palindrome");
   else printf("not a palindrome");
   return 0;
}