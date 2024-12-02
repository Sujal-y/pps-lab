#include<stdio.h>
void swap(int *x,int *y){
    int temp;
    temp=*x;
    *x = *y;
    *y = temp;
}
int main(){
    int n1,n2;
    printf("enter the 2 number:- \n");
    scanf("%d%d",&n1,&n2);
    printf("x=%d y=%d\n",n1,n2);
    swap(&n1,&n2);
    printf("x=%d y=%d\n",n1,n2);
   
    return 0;
}