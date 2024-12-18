#include <stdio.h>
#include <string.h>
#include <ctype.h>

void extractDigits(const char *input, char *output) {
    int j = 0; // Index for the output string
    for (int i = 0; input[i] != '\0'; i++) {
        if (isdigit(input[i])) {
            output[j++] = input[i]; // Add digit to the output
        }
    }
    output[j] = '\0'; 
}

int main() {
    char input[100], output[100];
    printf("NAME:- Sujal Y\n");
    printf("REGISTRATION NUMBER:- 245805200 \n");
    printf("Section :- B\n");

 printf("Enter an alphanumeric string: ");
    fgets(input, sizeof(input), stdin);
    input[strcspn(input, "\n")] = '\0';
  
    extractDigits(input, output);

    printf("Extracted digits: %s\n", output);

    return 0;
}
