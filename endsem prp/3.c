#include<stdio.h>
int main(){
    printf("enter the rows of the pyramid: ");
    int row;
    scanf("%d", &row);
    for(int i =0;i<=row;i++)printf(" ");
    printf("*\n");
    int whichrow =1;
    for(int i = 0; i < row; i++){
        for(int a=0;a<row-i;a++){
            printf(" ");
        }
        for(int j=0;j<=whichrow;j++){
        printf("* ");
        }
        whichrow++;


        
    
        printf("\n");
    }




    printf("\n");
    return 0;
}