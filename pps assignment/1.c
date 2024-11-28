#include <stdio.h>
#include<stdlib.h>

void bubbleSort(int arr[], int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                // Swap arr[j] and arr[j+1]
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main() {
    int n, p,row,col;
    int temparr[100],nele=0;

    printf("Enter the dimension:- ");
    // Input the dimension of the matrix
    scanf("%d", &n);

    int arr[n][n];
    printf("Enter the elements:- \n");
    // Input the matrix elements in row-major order
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &arr[i][j]);
            if (arr[i][j]>1000||arr[i][j]<1)
            {
                printf("input out of range\n");
                exit(0);
            }
            
            temparr[nele]+=arr[i][j];
            nele++;
        }
    }

    // Input the position p
    printf("Enter the p:- ");
    scanf("%d", &p);   // p-1 -> loction index in 1d array

    //sorting
    bubbleSort(temparr,nele);
    int ele = temparr[p-1];

    //finding the indices
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if(ele == arr[i][j]){
                row = i;
                col = j;
            };
        }
    }

    printf("%d %d %d\n", row, col, arr[row][col]);
    return 0;
}