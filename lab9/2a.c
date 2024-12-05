//Write a C program to copy one array to another using pointers
#include<stdio.h>
int main(){
    int n;
    printf("enter how many elements\n");
    scanf("%d",&n);
    int x[n],y[n];
    printf("enter elements\n");
    for(int i=0;i<n;i++)scanf("%d",&x[i]);
    int *ptr;ptr=x;
    for(int i=0;i<n;i++){
        y[i]=*ptr;
        ptr +=1;
    }
    printf("\n");
    for(int i=0;i<n;i++)printf("%d ",x[i]);


    return 0;
}