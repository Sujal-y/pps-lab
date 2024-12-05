//Search the position of the number that is entered by the user and delete that particular 
//number from the array and display the resultant array elements
#include<stdio.h>
void delete(int a[],int size,int ele){
    int temp,pos=-1;
    for(int i=0;i<size;i++){
        if(ele==a[i])pos=i;
    }
    if(pos>=0){
        for(int i=pos;i<size;i++){
        a[i]=a[i+1];
    }
}

}

int main()
{
    int n,ele;
    printf("enter the size of the array\n");
    scanf("%d",&n);
    int a[n];
    printf("enter the elements of the array\n");
    for(int i=0;i<n;i++)scanf("%d",&a[i]);
    printf("enter the number to be deleted\n");
    scanf("%d",&ele);

    printf("\nbefore deletion array\n");
    for(int i=0;i<n;i++)printf("%d,",a[i]);
    
    delete(a,n,ele);
    n--;

    printf("\nafter deletion array\n");
    for(int i=0;i<n;i++)printf("%d ",a[i]);


    printf("\n");
    return 0;
}