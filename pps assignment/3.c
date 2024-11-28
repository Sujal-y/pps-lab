#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int search(int arr[],int ele,int n){
    int pos=-1;
    for(int i =0;i<n;i++){
        if (ele==arr[i]) pos=i;
    }
    return pos;
}
void reverse(int arr[],int newarr[],int n, int k){
    int i,j;
    for(i =n-k,j=0;i<n;i++,j++){
        newarr[j]=arr[i];
    }
    for(i=0,j=k;i<n;i++,j++){
        newarr[j]=arr[i];
    }

}
int main(){
    int n,arr[105],k,t;

    scanf("%d",&n); //number of elements
    for(int i = 0;i<n;i++){
        scanf("%d",&arr[i]);//array input
    }
    scanf("%d",&k); //pivot index to rotate the array
    scanf("%d",&t); //target element to be searched

    int newarr[n];
    reverse(arr,newarr,n,k);//

    for(int i =0;i<n;i++){
        printf("%d ",newarr[i]);
    }

    printf("\n");
    printf("%d\n ",search(newarr,t,n));
    printf("\n");
    return 0;
}