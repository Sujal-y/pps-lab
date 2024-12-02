#include<stdio.h>
int max(int a[],int n){
    int *max;
    max = &a[0];
    for (int i = 0; i < n; i++)
    {
        if(*max<a[i])*max=a[i];
    }
    return *max;
    
}
int main(){
    int n;
    printf("enter the size of array:- ");
    scanf("%d",&n);
    printf("enter elements");
    int a[n];
    for(int i=0;i<n;i++)scanf("%d",&a[i]);
    printf("largest number = %d\n",max(a,n));
    return 0;
}