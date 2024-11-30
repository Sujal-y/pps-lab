#include<stdio.h>
int checkselfdiving(int num){
    int istrue = 1;
    int temp,permnum=num;
    while(num>0){
        temp=num%10;
        if(permnum%temp != 0)istrue=0;
        num/=10;
    }
    return istrue;

}
int main() {
   int ub,lb;
    printf("NAME:- Sujal Y\n");
    printf("REGISTRATION NUMBER:- 245805200 \n");
    printf("Section :- B\n");


    printf("enter left and right ");
   scanf("%d%d",&lb,&ub);
   printf("\n[");
   for(int i =lb;i<=ub;i++){
    if(checkselfdiving(i)) printf("%d,",i);
    }
   printf("]\n");
   return 0;
}