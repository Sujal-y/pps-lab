//Count the number of words in a sentence.
#include <stdio.h>
#include <string.h>
int main(){
    char input[100];
    printf("Enter a sentence: ");
    fgets(input, 100, stdin);
    int count = 1;
    for(int i=0;i<strlen(input);i++){
        if(input[i]==' '&&input[i+1]!=' '){
            count++;
        }
    }
    printf("Number of words: %d\n",count);

}