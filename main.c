#include<time.h>
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

int main(){
clock_t begin = clock();


    int a[10]={8,5,3,53,21,75,2,7,29,4};
    


    bubblesort(a, 10, 'a');
    printf("\nArray sorted in ascending order:\n");
    
    for(int i = 0; i < 10; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");

clock_t end = clock();
double time_spent = (double)(end - begin) / CLOCKS_PER_SEC;
printf("\ntime spent:- %f",time_spent);
return 0;
}