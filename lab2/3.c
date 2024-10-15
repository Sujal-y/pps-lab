//Compute all the roots of a quadratic equation using switch case statement.
// [Hint: X = (-b +/sqrt(b2-4ac))/2a]
#include<stdio.h>
int main()
{
    int n1,n2,n3;
    printf("enter nums \n");
    scanf("%d%d%d",&n1,&n2,&n3);
    if (n1>n2) 
        if (n1>n3)printf("%d",n1);
        else if (n2>n3)printf("%d",n2);
    else printf("%d",n3);
    return 0;
}