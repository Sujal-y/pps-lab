#include<stdio.h>
int main()
{
    int r1,c1,r2,c2;
    printf("Enter the order of the first matrix separated by spaces\n");
    scanf("%d %d",&r1,&c1);
    int mat1[r1][c1];
    printf("Enter the values of the first matrix\n");
    for(int i=0;i<r1;i++)
    {
        for(int j=0;j<c1;j++)
        {
            scanf("%d",&mat1[i][j]);
        }
    }
    printf("Enter the order of the second matrix separated by spaces\n");
    scanf("%d %d",&r2,&c2);
    int mat2[r2][c2];
    printf("Enter the values of the second matrix\n");
    for(int i=0;i<r2;i++)
    {
        for(int j=0;j<c2;j++)
        {
            scanf("%d",&mat2[i][j]);
        }
    }
    if(c1==r2)
    {
        printf("Product possible\n");
        int product[r1][c2];
        for(int i=0;i<r1;i++)
        {
            for(int j=0;j<c2;j++)
            {
                product[i][j]=0;
            }
        }
        for(int i=0;i<r1;i++)
        {
            for(int j=0;j<c2;j++)
            {
                for(int k=0;k<c1;k++)
                {
                    product[i][j]+=mat1[i][k]*mat2[k][j];
                }
            }
        }
        for(int i=0;i<r1;i++)
        {
            for(int j=0;j<c2;j++)
            {
                printf("%d ",product[i][j]);
            }
            printf("\n");
        }
    }
    else
        printf("Matrices not multipliable");
    return 0;
}