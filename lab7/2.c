//Input a string and toggle the case of every character in the input string.
// Ex: INPUT: aBcDe
// OUTPUT: AbCdE
#include <stdio.h>
#include <string.h>
int main(){
    char input[100];
    printf("Enter a sentence: ");
    fgets(input, 100, stdin);
    for(int i=0;i<strlen(input);i++){
        if(input[i]>='a'&&input[i]<='z'){
            input[i]-=32;
        }
        else if(input[i]>='A'&&input[i]<='Z'){
            input[i]+=32;
        }
    }


    
    printf("Toggled case: %s\n",input);
}