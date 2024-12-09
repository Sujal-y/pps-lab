// Delete a word from the given sentence.
// Ex: INPUT: I AM STUDYING IN MIT
// TO BE DELETED: STUDYING
// OUTPUT: I AM IN MIT
#include <stdio.h>
#include <string.h>

int main() {
    char sentence[100];
    char word[20];
    char* pos;
    int len;

    printf("Enter a sentence: ");
    gets(sentence);
    

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
