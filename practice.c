#include<stdio.h>
#include<string.h>
int main(){
    char input[100],rev[100];
    fgets(input,100,stdin);
    int i=0,j;
    while(input[i]!='\0'){
        if(input[i]=='\n'){
            input[i]='\0';
        }
        i++;
    }
    for(i=0, j=strlen(input);i<strlen(input);i++,j--){
        rev[i]=input[j-1];
    }
    rev[i]='\0';
    if(strcmp(input,rev)==0){
        printf("Yes\n");
    }
    else{
        printf("No\n");
    }
    printf("\n%s\njjj\n",rev);
    printf("\n%s\njjj\n",input);
    return 0;
}