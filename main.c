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


    int n=200;
    int a[n];
    for (int i = 0; i<n; i++) {
            a[i]=i;
            
        
    }
    


    bubblesort(a, n, 'd');
    printf("\nArray sorted in ascending order:\n");
    
    

clock_t end = clock();
double time_spent = (double)(end - begin) / CLOCKS_PER_SEC;
printf("\ntime spent:- %f\n",time_spent);
return 0;
}