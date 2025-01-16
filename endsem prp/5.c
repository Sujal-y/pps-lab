//pointers
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n=2,m=3,a[n][m],*p;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            p = &a[i][j];
            scanf("%d",p);
        }
    }
    //display
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            p = &a[i][j];
            printf("%d ",*p);
        }
        printf("\n");
    }


}