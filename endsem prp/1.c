#include <stdio.h>

int main() {
    int n, m, i, j, k;

    printf("Enter the number of rows: ");
    scanf("%d", &n);

    m = 2 * n - 1;
    char a[n][m]; // Declare array after getting 'n'

    // Initialize the array with spaces
    for (i = 0; i < n; i++) {
        for (j = 0; j < m; j++) {
            a[i][j] = ' ';
        }
    }

    for (i = 0; i < n; i++) {
        k = n - 1 - i; // Calculate starting position correctly
        for (j = k; j <= m - 1 - k; j++) {
            a[i][j] = '*';
        }
    }

    printf("Output:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < m; j++) {
            printf("%c ", a[i][j]); // Print with spaces for better visualization
        }
        printf("\n");
    }

    return 0;
}