//Perform matrix multiplication and display the resultant matrix.
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void matrix2dentry(int row,int col,int a[row][col]){
    for(int i=0;i<row;i++){
        for(int j =0;j<col;j++){
            scanf("%d",&a[i][j]);
        }
    }
}
void display2dmatrix(int row,int col,int a[row][col]){
    for(int i=0;i<row;i++){
        for(int j =0;j<col;j++){
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
}
int main(){
    clock_t begin = clock();
    int n1,m1,n2,m2,r1,r2;
    printf("enter the size n1Xm1\n");
    scanf("%d%d",&n1,&m1);
    printf("enter the elements\n");
    int arr1[n1][m1];

    matrix2dentry(n1,m1,arr1);

    printf("enter the size n2Xm2\n");
    scanf("%d%d",&n2,&m2);
    int arr2[n2][m2];
    printf("enter the elements\n");
    
    matrix2dentry(n2,m2,arr2);
    
    if(m1!=n2)exit(0);
    int arr3[n1][m2];
    for (int i = 0; i < n1; i++) {
    for (int j = 0; j < m2; j++) {
        arr3[i][j] = 0;
    }
}

    for(int i=0;i<n1;i++){
        for(int j=0;j<m2;j++){
            for(int k=0;k<m1;k++){
                arr3[i][j]+=arr1[i][k]*arr2[k][j];
            }
        }
    }

    printf("resultant matrix\n");
    display2dmatrix(n1,m2,arr3);

    clock_t end = clock();
    double time_spent = (double)(end - begin) / CLOCKS_PER_SEC;
    printf("\ntime spent:- %f\n",time_spent);
    
    return 0;
}
