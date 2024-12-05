#include<stdio.h>

void bubblesort(int a[], int size, char order) {
    int temp;
    for(int i = 0; i < size - 1; i++) {
        for(int j = 0; j < size - i - 1; j++) {
            if((order == 'a' && a[j] > a[j+1]) || (order == 'd' && a[j] < a[j+1])) {
                temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
        }
    }
}

int main() {
    int n;
    char choice;

    printf("Enter the size of the array: ");
    scanf("%d", &n);

    int a[n];
    printf("Enter the elements of the array: ");
    for(int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    printf("Choose sorting order ('a' for ascending, 'd' for descending): ");
    scanf(" %c", &choice); 

    switch(choice) {
        case 'a':
            bubblesort(a, n, 'a');
            printf("\nArray sorted in ascending order:\n");
            break;
        case 'd':
            bubblesort(a, n, 'd');
            printf("\nArray sorted in descending order:\n");
            break;
        default:
            printf("\nInvalid choice! Sorting in ascending order by default.\n");
            bubblesort(a, n, 'a');
    }

    for(int i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");

    return 0;
}
