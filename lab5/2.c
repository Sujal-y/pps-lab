//Arrange the given elements in a 1D array in ascending and descending order using 
// bubble sort method. [Hint: use switch case (as case ‘a’ and case ‘d’) to specify the 
#include<stdio.h>
void bubblesort(int a[],int size){
    int temp;
    for(int i=0;i<size;i++){
        for(int j =0;j<size-i;j++){
            if(a[j]>a[j+1]){
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]= temp;
            }
        }
    }
}

int main()
{
    int n;
    printf("enter the size of the array\n");
    scanf("%d",&n);
    int a[n];
    printf("enter the elements of the array\n");
    for(int i=0;i<n;i++)scanf("%d",&a[i]);

    printf("\nunsorted array\n");
    for(int i=0;i<n;i++)printf("%d,",a[i]);
    
    bubblesort(a,n);

    printf("\nsorted array\n");
    for(int i=0;i<n;i++)printf("%d,",a[i]);

    printf("\n");
    return 0;
}