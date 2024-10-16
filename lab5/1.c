//Find the largest and smallest element in a 1D array. 
#include<stdio.h>
int main()
{
int largest,smallest,size;
int a[100];
printf("enter the size\n");
scanf("%d",&size);
printf("enter the elements\n");
for(int i=0;i<size;i++){//inputing array
   scanf("%d",&a[i]);
}
largest = a[0];
smallest = a[0];
for(int i=0;i<size;i++){
    if (a[i] > largest) largest = a[i];
    if (a[i] < smallest) smallest = a[i];
}
    printf("Largest element: %d\n", largest);
    printf("Smallest element: %d\n", smallest);
}