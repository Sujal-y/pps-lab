#include<stdio.h>
#include<stdlib.h>
#include<string.h>
//delete a word from a sentence
int main() {
    char sentence[100];
    char word[20];
    char* pos;
    int len;

    printf("Enter a sentence: ");
    fgets(sentence, 100, stdin);
    sentence[strcspn(sentence, "\n")] = '\0'; // Remove newline character

    printf("Enter the word to delete: ");
    scanf("%s", word);

    len = strlen(word);
    while ((pos = strstr(sentence, word)) != NULL) {
        for (int i = 0; i < strlen(pos + len) + 1; i++) {
            pos[i] = pos[i + len];
        }
    }

    printf("Modified sentence: %s\n", sentence);

    return 0;
}
