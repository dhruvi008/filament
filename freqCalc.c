#include <stdio.h>

#define MAX_LENGTH 100
#define ASCII_SIZE 256

int main() {
    char str[MAX_LENGTH];
    int frequency[ASCII_SIZE] = {0},i; // Array to store frequency of each character

    // Input the string from the user
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Remove the newline character if present
    int length = 0;
    while (str[length] != '\0') {
        length++;
    }
    if (str[length - 1] == '\n') {
        str[length - 1] = '\0';
        length--; // Adjust length to exclude newline character
    }

    // Count frequency of each character
    for (i = 0; i < length; i++) {
        unsigned char index = (unsigned char)str[i]; // Get ASCII value of character
        frequency[index]++;
    }

    // Print the frequency of each character
    printf("Character frequencies:\n");
    for (i = 0; i < ASCII_SIZE; i++) {
        if (frequency[i] > 0) {
            printf("'%c': %d\n", i, frequency[i]);
        }
    }

    return 0;
}
