#include<stdio.h>
#include<stdlib.h>
int ConnerSum(int row,int col){
    int a[row][col];
    printf("\nenter the elements of the matrix\n");
    for(int i=0;i<row;i++){
        for(int j =0;j<row;j++){
            scanf("%d",&a[i][j]);
        }
    }
    int sum=0;
    sum=a[0][0]+a[0][col-1]+a[row-1][0]+a[row-1][col-1];
    return sum;
}
int main()
{
    int n,m;
    printf("enter the size of the matrix");
    scanf("%d%d",&n,&m);
    printf("result:- %d",ConnerSum(n,m));
 
    return 0;
}
 