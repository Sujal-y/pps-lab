#include<stdio.h>
int max(int a[],int n){
    int *ptr;
    int maxnum = a[0];
    for (int i = 0; i < n; i++)
    {
        ptr=&a[i];
        if(maxnum<*ptr)maxnum=a[i];
    }
    return maxnum;
    
}
int main(){
    int n;
    printf("enter the size of array:- ");
    scanf("%d",&n);
    printf("enter elements:- ");
    int a[n];
    for(int i=0;i<n;i++)scanf("%d",&a[i]);
    printf("largest number = %d\n",max(a,n));
    return 0;
}