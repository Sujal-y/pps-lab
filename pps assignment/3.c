#include <stdio.h>
#include <stdlib.h>

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
    printf("NAME:- SUJAL Y /n ");
    printf("REGISTRATION NUMBER:- 245805200 \n");

    scanf("%d",&n); //number of elements
    for(int i = 0;i<n;i++){
        scanf("%d",&arr[i]);//array input
    }
    scanf("%d",&k); //pivot index to rotate the array
    scanf("%d",&t); //target element to be searched

    for (int i=0;i< n-1;i++)
    for (int j=i+1;j<n; j++)
    if(arr[i]==arr[j]){printf("-1");exit(0);}

    for(int i = 0;i<n;i++){
        if(-231 >=arr[i]||arr[i] >= 230){
        printf("-1");
        exit(0);
    }
    }
    if(n<=1||n>=105||0>=k||k>=n||-231>=t||t>=230){
        printf("-1");
        exit(0);
    }

    int newarr[n];
    reverse(arr,newarr,n,k);

    for(int i =0;i<n;i++){
        printf("%d ",newarr[i]);
    }

    printf("\n");
    printf("%d\n ",search(newarr,t,n));
    printf("\n");
    return 0;
}