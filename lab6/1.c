//Check whether the matrix is symmetric or not
#include<stdio.h>
int symmetric(int a[][10],int row,int col){
    int issymmetric =1;
    if(row!=col)return 0;
    for(int i=0;i<row;i++){
        for(int j =0;j<col;j++){
            if(a[i][j]!=a[j][i])issymmetric=0;
        }
    }
    return issymmetric;
}
void matrix2dentry(int a[][10],int row,int col){
    for(int i=0;i<row;i++){
        for(int j =0;j<col;j++){
            scanf("%d",&a[i][j]);
        }
    }
}
int main(){
    int n,m;
    printf("enter the size nXn\n");
    scanf("%d",&n);
    printf("enter the elements\n");
    int arr[n][n];
    matrix2dentry(arr,n,n);//matrix entry
    if(symmetric(arr,n,n))printf("\nmatrix is symmentric\n");
    else printf("\nnot symmetric\n");
    return 0;
}