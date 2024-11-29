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
    printf("Enter an alphanumeric string: ");
    fgets(input, sizeof(input), stdin);

    // Remove the trailing newline character if present
    input[strcspn(input, "\n")] = '\0';

    // Extract digits
    extractDigits(input, output);

    // Print the result
    printf("Extracted digits: %s\n", output);

    return 0;
}
