// Delete a word from the given sentence.
// Ex: INPUT: I AM STUDYING IN MIT
// TO BE DELETED: STUDYING
// OUTPUT: I AM IN MIT
#include <stdio.h>
#include <string.h>
int main(){
    char input[100],word[100],result[100];
    printf("enter the input:- ");
    scanf("%[^\n]s",input);
    printf("enter the word to be deleted:- ");
    scanf("%[^\n]s",word);
    for(int i=0;i<strlen(input);i++){
        if(input[i]=='\n')input[i]='\0';
    }
    int length = strlen(word)-1;
    for(int i=0;i<length;i++){

    }



}