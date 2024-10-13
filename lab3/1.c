//reverse a a number to check weather its a paildrome or not
#include <stdio.h>
int main() {
   int n,temp,rev=0;
   n = 010; // number to check
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