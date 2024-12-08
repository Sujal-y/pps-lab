//Interchange any two Rows & Columns in the given matrix and display resultant.
#include<stdio.h>
void interchangerow(int row,int col,int a[row][col],int r1,int r2){
    for(int i=0;i<col;i++){
        int temp=a[r1][i];
        a[r1][i]=a[r2][i];
        a[r2][i]=temp;
    }
}
void interchangecol(int row,int col,int a[row][col],int c1,int c2){
    for(int i=0;i<row;i++){
        int temp=a[i][c1];
        a[i][c1]=a[i][c2];
        a[i][c2]=temp;
    }
}
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
    int n,m,r1,r2,c1,c2;
    printf("enter the size nXm\n");
    scanf("%d%d",&n,&m);
    printf("enter the elements;-\n");
    int arr[n][m];
    matrix2dentry(n,m,arr);
    printf("enter rows indices to be switched\n");
    scanf("%d%d",&r1,&r2);
    printf("enter col indices to be switched\n");
    scanf("%d%d",&c1,&c2);
    
    interchangerow(n,m,arr,r1,r2);
    interchangecol(n,m,arr,c1,c2);
    
    printf("resultant matrix\n");
    display2dmatrix(n,m,arr);

    printf("\n");
    return 0;
}
