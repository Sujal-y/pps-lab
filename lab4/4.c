// Check whether a given number is perfect or not. 
// [Hint: Sum of all positive divisors of a given number 
// excluding the given number is equal to the number] Ex: 28 = 1+ 2 + 4 + 7 + 14 = 28 is a perfect number
#include<stdio.h>
int main()
{
int ele,sum=0;
printf ("Enter element \n");
scanf("%d",&ele);
for(int i =1;i<ele;i++)
{
    if (ele%i == 0){//if i is a divisor then it gets added to sum
        sum +=i;
    }
}
if (ele == sum)
{
    printf ("perfect number!! \n");
}
else
{
    printf ("not a perfect number :< \n");
}
return 0;
}