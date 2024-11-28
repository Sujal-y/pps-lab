#include <stdio.h>

int main() {
    int n, p;

    // Input the dimension of the matrix
    scanf("%d", &n);

    int arr[n][n];

    // Input the matrix elements in row-major order
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &arr[i][j]);
        }
    }

    // Input the position p
    scanf("%d", &p);

    // Convert the position p to 0-based index
    int index = p - 1;

    // Determine the row and column based on the serpentine order
    int row = index / n;       // Row index
    int col = index % n;       // Column index

    // Adjust column index for odd rows (reverse direction)
    if (row % 2 == 1) {
        col = n - 1 - col;
    }

    // Output the result
    printf("%d %d %d\n", row, col, arr[row][col]);

    return 0;
}

