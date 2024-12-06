//Compute and display the trace and norm of a given square matrix.
// Hint: Trace sum of principal diagonal elements, Norm= SQRT (sum of squares of
// the individual elements of an array)
#include<stdio.h>
#include<math.h>
void matrix2dentry(int a[][10],int row,int col){
    for(int i=0;i<row;i++){
        for(int j =0;j<col;j++){
            scanf("%d",&a[i][j]);
        }
    }
}
int trace(int arr[][10],int row, int col){
    int sum=0;
    if(row!=col)return 0;
    for(int i=0;i<row;i++){
        sum +=arr[i][i];
    }
    return sum;
}
int norm(int arr[][10], int row, int col){
    int sum=0;
    if(row!=col)return 0;
    int norm=0;
    for(int i=0;i<row;i++){
        for(int j =0;j<col;j++){
            sum+=pow((arr[i][j]),2);
        }
    }
    printf("%d sum",sum);
    norm=sqrt(sum);
    return norm;
}
int main(){
    int n,m;
    printf("enter the size nXn\n");
    scanf("%d",&n);
    printf("enter the elements\n");
    int arr[n][n];
    matrix2dentry(arr,n,n);//matrix entry
    printf("trace = %d\n",trace(arr,n,n));
    printf("norm = %d\n",norm(arr,n,n));
    return 0;
}