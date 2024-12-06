//Perform matrix multiplication and display the resultant matrix.
#include<stdio.h>
#include<stdlib.h>
void matrix2dentry(int a[][10],int row,int col){
    for(int i=0;i<row;i++){
        for(int j =0;j<col;j++){
            scanf("%d",&a[i][j]);
        }
    }
}
void display2dmatrix(int a[][10],int row,int col){
    for(int i=0;i<row;i++){
        for(int j =0;j<col;j++){
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
}
int main(){
    int n1,m1,n2,m2,r1,r2;
    printf("enter the size n1Xm1\n");
    scanf("%d%d",&n1,&m1);
    printf("enter the elements\n");
    int arr1[n1][m1];
    matrix2dentry(arr1,n1,m1);
    printf("enter the size n2Xm2\n");
    scanf("%d%d",&n2,&m2);
    int arr2[n2][m2];
    matrix2dentry(arr2,n2,m2);
    if(m1!=n2)exit(0);
    int arr3[n1][m2];

    display2dmatrix(arr1,n1,m1);

    // printf("resultant matrix\n");
    // display2dmatrix(arr3,n1,m2);
    
    return 0;
}
