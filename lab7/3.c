//Check whether the given string is a palindrome or not.
#include<stdio.h>
#include<string.h>
#include<stdbool.h>
int main(){
    char input[100];
    printf("Enter a sentence: ");
    fgets(input, 100, stdin);
    char rev[100];
    for(int i=0;i<strlen(input);i++){
        if(input[i]=='\n')input[i]='\0';//n->'\0' n-1->'\n'
        rev[i] = input[strlen(input)-i-2];
    }
    int flag=true;
    for(int i=0;i<strlen(input)/2;i++){
        if(input[i]!=rev[i]){
            flag=false;
            break;
        }
    }
    if(flag){
        printf("The given string is a palindrome.\n");
    }
    else{
        printf("The given string is not a palindrome.\n");
    }
}