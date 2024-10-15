// Generate the  multiplication  table  for  ‘n’  numbers  up to  ‘k’ terms  (using  nested  for 
// loops). 
// [ Hint:  1 2 3 4 5 .... k 
// 2 4 6 8  10  ....2*k 
// ......................... 
// n..................  n*k ]
#include<stdio.h>
int main()
{
int n,k,ele;
ele = 1;
printf("enter till which number\n");
scanf("%d",&n);
printf("enter how many terms\n");
scanf("%d",&k);
for (int i = 1; i <= n; i++)
{
    
    for (int j = 1; j <= k; j++)
    {   
        printf("%d\t",ele*j);
    }
    ele++;
    printf("\n");
}
}