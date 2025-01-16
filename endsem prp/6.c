#include<stdio.h>
int main()
{
    int f1=5,f2=10;
    int *p1,*p2;
    p1 = &f1;
    p2 = &f2;
    *p1 =10;
    *p2 = *p1;
    
    *p1 = 20;
    printf("%d %d",f1,f2);

    return 0;
}