#include<stdio.h>
int main()
{
    printf("Enter the length\n");
    int n;
    scanf("%d",&n);
    int a[n];
    printf("Enter the values");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int ln=a[0];
    int *ptr;
    ptr = &ln;
    for(int i=0;i<n;i++)
    {
        if(a[i]>*ptr)
            *ptr=a[i];
    }
    printf("The largest number is %d",*ptr);
    return 0;
}