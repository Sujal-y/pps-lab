//Interchange any two Rows & Columns in the given matrix and display resultant.
#include<stdio.h>
void interchange(int row,int col,int a[][col],int r1,int r2){
    for(int i=0;i<col;i++){
        int temp=a[r1][i];
        a[r1][i]=a[r2][i];
        a[r2][i]=temp;
    }
}
void matrix2dentry(int row,int col,int a[][col]){
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
    int n,m,r1,r2;
    printf("enter the size nXm\n");
    scanf("%d%d",&n,&m);
    printf("enter the elements;-\n");
    int arr[n][m];
    matrix2dentry(n,m,arr);
    printf("enter rows indices to be switched\n");
    scanf("%d%d",&r1,&r2);
    
    interchange(n,m,arr,r1,r2);
    
    printf("resultant matrix\n");
    
    for(int i=0;i<n;i++){
        for(int j =0;j<m;j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}
