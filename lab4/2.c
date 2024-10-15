// Generate Floyd's triangle using natural numbers tor a given limit N. (using for
// loops) [Hint: Floyd's triangle is a right angled-triangle using the natural numbers]
// Ex: Input: N=
// Output:
// 1
// 2 3
// 4 5 6
// 7 8 9 10
#include<stdio.h>
int main()
{
int n,ele;
ele = 1;
printf("enter till which row\n");
scanf("%d",&n);
for (int i = 1; i <= n; i++)
{
    for (int j = 1; j <= i; j++)
    {   
        printf("%d",ele);
        ele++;
    }
    printf("\n");
}
}