#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    printf("enter the length of the pyramid: ");
    int length;
    scanf("%d", &length);
    int right_hand=length,left_hand=length;
    int e=2;
    for(int i =0;i<=length;i++)printf(" ");
    printf("*\n");
    for(int i = 0; i < length; i++){
        for(int a=0;a<left_hand;a++){
            printf(" ");
        }
        printf("*");
        
        for(int a=0;a<e-1;a++){
            printf("*");
        }
        e+=2;
        
        printf("*");
        left_hand--;
        printf("\n");
    }
    
    printf("\n");
    return 0;
}